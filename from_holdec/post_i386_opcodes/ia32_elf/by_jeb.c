
int bswap_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    int v3 = *(int*)0x1000;
    int v4 = *(int*)0x1004;
    int v5 = *(int*)0x1008;
    int v6 = *(int*)0x100C;
    int v7 = *(int*)0x1010;
    int v8 = *(int*)0x1014;
    int v9 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = (unsigned int)(unsigned char)(v3 >>> 24) | ((unsigned int)(unsigned char)(v3 >>> 16) << 8) | ((unsigned int)(unsigned char)(v3 >>> 8) << 16) | ((unsigned int)(unsigned char)v3 << 24);
    *(int*)0x2004 = v4;
    *(int*)0x2008 = v5;
    *(int*)0x200C = v6;
    *(int*)0x2010 = v7;
    *(int*)0x2014 = v8;
    *(int*)0x2018 = v9;
    *(char*)0x2200 = (v2 >>> 11) & 0x1 ? 1: 0;
    *(char*)0x2201 = (v2 >>> 11) & 0x1 ? 0: 1;
    *(char*)0x2202 = v2 & 0x1 ? 1: 0;
    *(char*)0x2203 = v2 & 0x1 ? 0: 1;
    *(char*)0x2204 = (v2 >>> 6) & 0x1 ? 1: 0;
    *(char*)0x2205 = (v2 >>> 6) & 0x1 ? 0: 1;
    *(char*)0x2206 = (v2 & 0x1) || ((v2 >>> 6) & 0x1) ? 1: 0;
    *(char*)0x2207 = (v2 & 0x1) || ((v2 >>> 6) & 0x1) ? 0: 1;
    *(char*)0x2208 = (v2 >>> 7) & 0x1 ? 1: 0;
    *(char*)0x2209 = (v2 >>> 7) & 0x1 ? 0: 1;
    *(char*)0x220A = (v2 >>> 2) & 0x1 ? 1: 0;
    *(char*)0x220B = (v2 >>> 2) & 0x1 ? 0: 1;
    *(char*)0x220C = ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 1: 0;
    *(char*)0x220D = ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 0: 1;
    *(char*)0x220E = ((v2 >>> 6) & 0x1) || ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 1: 0;
    *(char*)0x220F = ((v2 >>> 6) & 0x1) || ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 0: 1;
    *(short*)0x2100 = (unsigned short)(v2 & 0x1) | ((unsigned short)1 << 1) | ((unsigned short)((v2 >>> 2) & 0x1) << 2) | ((unsigned short)0 << 3) | ((unsigned short)((v2 >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)(unsigned char)((v2 >>> 6) & 0x3f) << 6) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int bswap_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -2072399453;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)2 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int bswap_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -390054351;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 1;
    *(char*)0x2201 = 0;
    *(char*)0x2202 = 1;
    *(char*)0x2203 = 0;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)3799 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int bswap_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 0x2000000;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)2 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int bswap_plain() {
    return 0;
}

void callAll() {
    // Decompilation error
}

int cmov1_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    short v3 = (unsigned short)*(int*)0x1000;
    short v4 = (unsigned short)(*(int*)0x1000 >>> 16);
    int v5 = *(int*)0x1004;
    int v6 = *(int*)0x1008;
    int v7 = *(int*)0x100C;
    int v8 = *(int*)0x1010;
    int v9 = *(int*)0x1014;
    int v10 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = (unsigned int)((v2 >>> 6) & 0x1 ? (unsigned short)v5: v3) | ((unsigned int)v4 << 16);
    *(int*)0x2004 = v5;
    *(int*)0x2008 = v6;
    *(int*)0x200C = v7;
    *(int*)0x2010 = v8;
    *(int*)0x2014 = v9;
    *(int*)0x2018 = v10;
    *(char*)0x2200 = (v2 >>> 11) & 0x1 ? 1: 0;
    *(char*)0x2201 = (v2 >>> 11) & 0x1 ? 0: 1;
    *(char*)0x2202 = v2 & 0x1 ? 1: 0;
    *(char*)0x2203 = v2 & 0x1 ? 0: 1;
    *(char*)0x2204 = (v2 >>> 6) & 0x1 ? 1: 0;
    *(char*)0x2205 = (v2 >>> 6) & 0x1 ? 0: 1;
    *(char*)0x2206 = (v2 & 0x1) || ((v2 >>> 6) & 0x1) ? 1: 0;
    *(char*)0x2207 = (v2 & 0x1) || ((v2 >>> 6) & 0x1) ? 0: 1;
    *(char*)0x2208 = (v2 >>> 7) & 0x1 ? 1: 0;
    *(char*)0x2209 = (v2 >>> 7) & 0x1 ? 0: 1;
    *(char*)0x220A = (v2 >>> 2) & 0x1 ? 1: 0;
    *(char*)0x220B = (v2 >>> 2) & 0x1 ? 0: 1;
    *(char*)0x220C = ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 1: 0;
    *(char*)0x220D = ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 0: 1;
    *(char*)0x220E = ((v2 >>> 6) & 0x1) || ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 1: 0;
    *(char*)0x220F = ((v2 >>> 6) & 0x1) || ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 0: 1;
    *(short*)0x2100 = (unsigned short)(v2 & 0x1) | ((unsigned short)1 << 1) | ((unsigned short)((v2 >>> 2) & 0x1) << 2) | ((unsigned short)0 << 3) | ((unsigned short)((v2 >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)(unsigned char)((v2 >>> 6) & 0x3f) << 6) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov1_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)2 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov1_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 0x313e81c3;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 1;
    *(char*)0x2201 = 0;
    *(char*)0x2202 = 1;
    *(char*)0x2203 = 0;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)3799 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov1_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)2 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov1_mv_plain() {
    return 0;
}

int cmov2_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    int v3 = *(int*)0x1000;
    int v4 = *(int*)0x1004;
    int v5 = *(int*)0x1008;
    int v6 = *(int*)0x100C;
    int v7 = *(int*)0x1010;
    int v8 = *(int*)0x1014;
    int v9 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = (v2 >>> 6) & 0x1 ? v4: v3;
    *(int*)0x2004 = v4;
    *(int*)0x2008 = v5;
    *(int*)0x200C = v6;
    *(int*)0x2010 = v7;
    *(int*)0x2014 = v8;
    *(int*)0x2018 = v9;
    *(char*)0x2200 = (v2 >>> 11) & 0x1 ? 1: 0;
    *(char*)0x2201 = (v2 >>> 11) & 0x1 ? 0: 1;
    *(char*)0x2202 = v2 & 0x1 ? 1: 0;
    *(char*)0x2203 = v2 & 0x1 ? 0: 1;
    *(char*)0x2204 = (v2 >>> 6) & 0x1 ? 1: 0;
    *(char*)0x2205 = (v2 >>> 6) & 0x1 ? 0: 1;
    *(char*)0x2206 = (v2 & 0x1) || ((v2 >>> 6) & 0x1) ? 1: 0;
    *(char*)0x2207 = (v2 & 0x1) || ((v2 >>> 6) & 0x1) ? 0: 1;
    *(char*)0x2208 = (v2 >>> 7) & 0x1 ? 1: 0;
    *(char*)0x2209 = (v2 >>> 7) & 0x1 ? 0: 1;
    *(char*)0x220A = (v2 >>> 2) & 0x1 ? 1: 0;
    *(char*)0x220B = (v2 >>> 2) & 0x1 ? 0: 1;
    *(char*)0x220C = ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 1: 0;
    *(char*)0x220D = ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 0: 1;
    *(char*)0x220E = ((v2 >>> 6) & 0x1) || ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 1: 0;
    *(char*)0x220F = ((v2 >>> 6) & 0x1) || ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 0: 1;
    *(short*)0x2100 = (unsigned short)(v2 & 0x1) | ((unsigned short)1 << 1) | ((unsigned short)((v2 >>> 2) & 0x1) << 2) | ((unsigned short)0 << 3) | ((unsigned short)((v2 >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)(unsigned char)((v2 >>> 6) & 0x3f) << 6) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov2_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)2 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov2_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 1231978947;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 1;
    *(char*)0x2201 = 0;
    *(char*)0x2202 = 1;
    *(char*)0x2203 = 0;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)3799 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov2_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)2 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov2_mv_plain() {
    return 0;
}

int cmov3_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    int v3 = *(int*)0x1000;
    int v4 = *(int*)0x1004;
    int v5 = *(int*)0x1008;
    int v6 = *(int*)0x100C;
    int v7 = *(int*)0x1010;
    int v8 = *(int*)0x1014;
    int v9 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = (v2 >>> 6) & 0x1 ? v4: v3;
    *(int*)0x2004 = v4;
    *(int*)0x2008 = v5;
    *(int*)0x200C = v6;
    *(int*)0x2010 = v7;
    *(int*)0x2014 = v8;
    *(int*)0x2018 = v9;
    *(char*)0x2200 = (v2 >>> 11) & 0x1 ? 1: 0;
    *(char*)0x2201 = (v2 >>> 11) & 0x1 ? 0: 1;
    *(char*)0x2202 = v2 & 0x1 ? 1: 0;
    *(char*)0x2203 = v2 & 0x1 ? 0: 1;
    *(char*)0x2204 = (v2 >>> 6) & 0x1 ? 1: 0;
    *(char*)0x2205 = (v2 >>> 6) & 0x1 ? 0: 1;
    *(char*)0x2206 = (v2 & 0x1) || ((v2 >>> 6) & 0x1) ? 1: 0;
    *(char*)0x2207 = (v2 & 0x1) || ((v2 >>> 6) & 0x1) ? 0: 1;
    *(char*)0x2208 = (v2 >>> 7) & 0x1 ? 1: 0;
    *(char*)0x2209 = (v2 >>> 7) & 0x1 ? 0: 1;
    *(char*)0x220A = (v2 >>> 2) & 0x1 ? 1: 0;
    *(char*)0x220B = (v2 >>> 2) & 0x1 ? 0: 1;
    *(char*)0x220C = ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 1: 0;
    *(char*)0x220D = ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 0: 1;
    *(char*)0x220E = ((v2 >>> 6) & 0x1) || ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 1: 0;
    *(char*)0x220F = ((v2 >>> 6) & 0x1) || ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 0: 1;
    *(short*)0x2100 = (unsigned short)(v2 & 0x1) | ((unsigned short)1 << 1) | ((unsigned short)((v2 >>> 2) & 0x1) << 2) | ((unsigned short)0 << 3) | ((unsigned short)((v2 >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)(unsigned char)((v2 >>> 6) & 0x3f) << 6) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov3_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)2 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov3_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 1231978947;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 1;
    *(char*)0x2201 = 0;
    *(char*)0x2202 = 1;
    *(char*)0x2203 = 0;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)3799 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov3_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)2 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov3_plain() {
    return 0;
}

int cmov4_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    short v3 = (unsigned short)*(int*)0x1000;
    short v4 = (unsigned short)(*(int*)0x1000 >>> 16);
    int v5 = *(int*)0x1004;
    int v6 = *(int*)0x1008;
    int v7 = *(int*)0x100C;
    int v8 = *(int*)0x1010;
    int v9 = *(int*)0x1014;
    int v10 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = (unsigned int)((v2 >>> 6) & 0x1 ? *(short*)(v5 + 12): v3) | ((unsigned int)v4 << 16);
    *(int*)0x2004 = v5;
    *(int*)0x2008 = v6;
    *(int*)0x200C = v7;
    *(int*)0x2010 = v8;
    *(int*)0x2014 = v9;
    *(int*)0x2018 = v10;
    *(char*)0x2200 = (v2 >>> 11) & 0x1 ? 1: 0;
    *(char*)0x2201 = (v2 >>> 11) & 0x1 ? 0: 1;
    *(char*)0x2202 = v2 & 0x1 ? 1: 0;
    *(char*)0x2203 = v2 & 0x1 ? 0: 1;
    *(char*)0x2204 = (v2 >>> 6) & 0x1 ? 1: 0;
    *(char*)0x2205 = (v2 >>> 6) & 0x1 ? 0: 1;
    *(char*)0x2206 = (v2 & 0x1) || ((v2 >>> 6) & 0x1) ? 1: 0;
    *(char*)0x2207 = (v2 & 0x1) || ((v2 >>> 6) & 0x1) ? 0: 1;
    *(char*)0x2208 = (v2 >>> 7) & 0x1 ? 1: 0;
    *(char*)0x2209 = (v2 >>> 7) & 0x1 ? 0: 1;
    *(char*)0x220A = (v2 >>> 2) & 0x1 ? 1: 0;
    *(char*)0x220B = (v2 >>> 2) & 0x1 ? 0: 1;
    *(char*)0x220C = ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 1: 0;
    *(char*)0x220D = ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 0: 1;
    *(char*)0x220E = ((v2 >>> 6) & 0x1) || ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 1: 0;
    *(char*)0x220F = ((v2 >>> 6) & 0x1) || ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 0: 1;
    *(short*)0x2100 = (unsigned short)(v2 & 0x1) | ((unsigned short)1 << 1) | ((unsigned short)((v2 >>> 2) & 0x1) << 2) | ((unsigned short)0 << 3) | ((unsigned short)((v2 >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)(unsigned char)((v2 >>> 6) & 0x3f) << 6) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov4_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)2 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov4_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = (unsigned int)*(short*)0x496E81CF | ((unsigned int)0x313e << 16);
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 1;
    *(char*)0x2201 = 0;
    *(char*)0x2202 = 1;
    *(char*)0x2203 = 0;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)3799 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov4_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)2 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov4_mv_plain() {
    return 0;
}

int cmov5_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    int v3 = *(int*)0x1000;
    int v4 = *(int*)0x1004;
    int v5 = *(int*)0x1008;
    int v6 = *(int*)0x100C;
    int v7 = *(int*)0x1010;
    int v8 = *(int*)0x1014;
    int v9 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = (v2 >>> 6) & 0x1 ? *(int*)(v4 + 34): v3;
    *(int*)0x2004 = v4;
    *(int*)0x2008 = v5;
    *(int*)0x200C = v6;
    *(int*)0x2010 = v7;
    *(int*)0x2014 = v8;
    *(int*)0x2018 = v9;
    *(char*)0x2200 = (v2 >>> 11) & 0x1 ? 1: 0;
    *(char*)0x2201 = (v2 >>> 11) & 0x1 ? 0: 1;
    *(char*)0x2202 = v2 & 0x1 ? 1: 0;
    *(char*)0x2203 = v2 & 0x1 ? 0: 1;
    *(char*)0x2204 = (v2 >>> 6) & 0x1 ? 1: 0;
    *(char*)0x2205 = (v2 >>> 6) & 0x1 ? 0: 1;
    *(char*)0x2206 = (v2 & 0x1) || ((v2 >>> 6) & 0x1) ? 1: 0;
    *(char*)0x2207 = (v2 & 0x1) || ((v2 >>> 6) & 0x1) ? 0: 1;
    *(char*)0x2208 = (v2 >>> 7) & 0x1 ? 1: 0;
    *(char*)0x2209 = (v2 >>> 7) & 0x1 ? 0: 1;
    *(char*)0x220A = (v2 >>> 2) & 0x1 ? 1: 0;
    *(char*)0x220B = (v2 >>> 2) & 0x1 ? 0: 1;
    *(char*)0x220C = ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 1: 0;
    *(char*)0x220D = ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 0: 1;
    *(char*)0x220E = ((v2 >>> 6) & 0x1) || ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 1: 0;
    *(char*)0x220F = ((v2 >>> 6) & 0x1) || ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 0: 1;
    *(short*)0x2100 = (unsigned short)(v2 & 0x1) | ((unsigned short)1 << 1) | ((unsigned short)((v2 >>> 2) & 0x1) << 2) | ((unsigned short)0 << 3) | ((unsigned short)((v2 >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)(unsigned char)((v2 >>> 6) & 0x3f) << 6) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov5_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)2 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov5_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = *(int*)0x496E81E5;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 1;
    *(char*)0x2201 = 0;
    *(char*)0x2202 = 1;
    *(char*)0x2203 = 0;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)3799 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov5_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)2 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov5_mv_plain() {
    return 0;
}

int cmov_l_with_code_0_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    int v3 = *(int*)0x1000;
    int v4 = *(int*)0x1004;
    int v5 = *(int*)0x1008;
    int v6 = *(int*)0x100C;
    int v7 = *(int*)0x1010;
    int v8 = *(int*)0x1014;
    int v9 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v10 = ((((unsigned char)v3 - 2) ^ (unsigned char)v3) & ((unsigned char)v3 ^ 0x2)) < 0;
    *(int*)0x2000 = v3;
    *(int*)0x2004 = v10 ? v3: v4;
    *(int*)0x2008 = v5;
    *(int*)0x200C = v6;
    *(int*)0x2010 = v7;
    *(int*)0x2014 = v8;
    *(int*)0x2018 = v9;
    *(char*)0x2200 = v10 ? 1: 0;
    *(char*)0x2201 = v10 ? 0: 1;
    *(char*)0x2202 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2203 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x2204 = (unsigned char)v3 == 2 ? 1: 0;
    *(char*)0x2205 = (unsigned char)v3 == 2 ? 0: 1;
    *(char*)0x2206 = (unsigned char)v3 <= 2 ? 1: 0;
    *(char*)0x2207 = (unsigned char)v3 <= 2 ? 0: 1;
    *(char*)0x2208 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2209 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x220A = __parity__((unsigned char)v3 - 2) ? 1: 0;
    *(char*)0x220B = __parity__((unsigned char)v3 - 2) ? 0: 1;
    *(char*)0x220C = (unsigned char)v3 < 2 != v10 ? 1: 0;
    *(char*)0x220D = (unsigned char)v3 < 2 != v10 ? 0: 1;
    *(char*)0x220E = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v10 ? 1: 0;
    *(char*)0x220F = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v10 ? 0: 1;
    *(short*)0x2100 = (unsigned short)((unsigned char)v3 < 2) | ((unsigned short)1 << 1) | ((unsigned short)__parity__((unsigned char)v3 - 2) << 2) | ((unsigned short)0 << 3) | ((unsigned short)(((((unsigned char)v3 - 2) ^ ((unsigned char)v3 ^ 0x2)) >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)((unsigned char)v3 == 2) << 6) | ((unsigned short)((unsigned char)v3 < 2) << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v10 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_0_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)134 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_0_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)1666 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_0_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)70 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_0_plain() {
    return 0;
}

int cmov_l_with_code_1_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    int v3 = *(int*)0x1000;
    int v4 = *(int*)0x1004;
    int v5 = *(int*)0x1008;
    int v6 = *(int*)0x100C;
    int v7 = *(int*)0x1010;
    int v8 = *(int*)0x1014;
    int v9 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v10 = ((((unsigned char)v3 - 2) ^ (unsigned char)v3) & ((unsigned char)v3 ^ 0x2)) < 0;
    *(int*)0x2000 = v3;
    *(int*)0x2004 = v10 ? v4: v3;
    *(int*)0x2008 = v5;
    *(int*)0x200C = v6;
    *(int*)0x2010 = v7;
    *(int*)0x2014 = v8;
    *(int*)0x2018 = v9;
    *(char*)0x2200 = v10 ? 1: 0;
    *(char*)0x2201 = v10 ? 0: 1;
    *(char*)0x2202 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2203 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x2204 = (unsigned char)v3 == 2 ? 1: 0;
    *(char*)0x2205 = (unsigned char)v3 == 2 ? 0: 1;
    *(char*)0x2206 = (unsigned char)v3 <= 2 ? 1: 0;
    *(char*)0x2207 = (unsigned char)v3 <= 2 ? 0: 1;
    *(char*)0x2208 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2209 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x220A = __parity__((unsigned char)v3 - 2) ? 1: 0;
    *(char*)0x220B = __parity__((unsigned char)v3 - 2) ? 0: 1;
    *(char*)0x220C = (unsigned char)v3 < 2 != v10 ? 1: 0;
    *(char*)0x220D = (unsigned char)v3 < 2 != v10 ? 0: 1;
    *(char*)0x220E = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v10 ? 1: 0;
    *(char*)0x220F = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v10 ? 0: 1;
    *(short*)0x2100 = (unsigned short)((unsigned char)v3 < 2) | ((unsigned short)1 << 1) | ((unsigned short)__parity__((unsigned char)v3 - 2) << 2) | ((unsigned short)0 << 3) | ((unsigned short)(((((unsigned char)v3 - 2) ^ ((unsigned char)v3 ^ 0x2)) >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)((unsigned char)v3 == 2) << 6) | ((unsigned short)((unsigned char)v3 < 2) << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v10 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_1_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = -1548650108;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)134 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_1_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 826196200;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)1666 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_1_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 2;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)70 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_1_mv_plain() {
    return 0;
}

int cmov_l_with_code_2_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    int v3 = *(int*)0x1000;
    int v4 = *(int*)0x1004;
    int v5 = *(int*)0x1008;
    int v6 = *(int*)0x100C;
    int v7 = *(int*)0x1010;
    int v8 = *(int*)0x1014;
    int v9 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v10 = ((((unsigned char)v3 - 2) ^ (unsigned char)v3) & ((unsigned char)v3 ^ 0x2)) < 0;
    *(int*)0x2000 = v3;
    *(int*)0x2004 = (unsigned char)v3 < 2 ? v3: v4;
    *(int*)0x2008 = v5;
    *(int*)0x200C = v6;
    *(int*)0x2010 = v7;
    *(int*)0x2014 = v8;
    *(int*)0x2018 = v9;
    *(char*)0x2200 = v10 ? 1: 0;
    *(char*)0x2201 = v10 ? 0: 1;
    *(char*)0x2202 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2203 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x2204 = (unsigned char)v3 == 2 ? 1: 0;
    *(char*)0x2205 = (unsigned char)v3 == 2 ? 0: 1;
    *(char*)0x2206 = (unsigned char)v3 <= 2 ? 1: 0;
    *(char*)0x2207 = (unsigned char)v3 <= 2 ? 0: 1;
    *(char*)0x2208 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2209 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x220A = __parity__((unsigned char)v3 - 2) ? 1: 0;
    *(char*)0x220B = __parity__((unsigned char)v3 - 2) ? 0: 1;
    *(char*)0x220C = (unsigned char)v3 < 2 != v10 ? 1: 0;
    *(char*)0x220D = (unsigned char)v3 < 2 != v10 ? 0: 1;
    *(char*)0x220E = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v10 ? 1: 0;
    *(char*)0x220F = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v10 ? 0: 1;
    *(short*)0x2100 = (unsigned short)((unsigned char)v3 < 2) | ((unsigned short)1 << 1) | ((unsigned short)__parity__((unsigned char)v3 - 2) << 2) | ((unsigned short)0 << 3) | ((unsigned short)(((((unsigned char)v3 - 2) ^ ((unsigned char)v3 ^ 0x2)) >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)((unsigned char)v3 == 2) << 6) | ((unsigned short)((unsigned char)v3 < 2) << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v10 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_2_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)134 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_2_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)1666 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_2_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)70 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_2_mv_plain() {
    return 0;
}

int cmov_l_with_code_3_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    int v3 = *(int*)0x1000;
    int v4 = *(int*)0x1004;
    int v5 = *(int*)0x1008;
    int v6 = *(int*)0x100C;
    int v7 = *(int*)0x1010;
    int v8 = *(int*)0x1014;
    int v9 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v10 = ((((unsigned char)v3 - 2) ^ (unsigned char)v3) & ((unsigned char)v3 ^ 0x2)) < 0;
    *(int*)0x2000 = v3;
    *(int*)0x2004 = (unsigned char)v3 < 2 ? v4: v3;
    *(int*)0x2008 = v5;
    *(int*)0x200C = v6;
    *(int*)0x2010 = v7;
    *(int*)0x2014 = v8;
    *(int*)0x2018 = v9;
    *(char*)0x2200 = v10 ? 1: 0;
    *(char*)0x2201 = v10 ? 0: 1;
    *(char*)0x2202 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2203 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x2204 = (unsigned char)v3 == 2 ? 1: 0;
    *(char*)0x2205 = (unsigned char)v3 == 2 ? 0: 1;
    *(char*)0x2206 = (unsigned char)v3 <= 2 ? 1: 0;
    *(char*)0x2207 = (unsigned char)v3 <= 2 ? 0: 1;
    *(char*)0x2208 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2209 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x220A = __parity__((unsigned char)v3 - 2) ? 1: 0;
    *(char*)0x220B = __parity__((unsigned char)v3 - 2) ? 0: 1;
    *(char*)0x220C = (unsigned char)v3 < 2 != v10 ? 1: 0;
    *(char*)0x220D = (unsigned char)v3 < 2 != v10 ? 0: 1;
    *(char*)0x220E = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v10 ? 1: 0;
    *(char*)0x220F = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v10 ? 0: 1;
    *(short*)0x2100 = (unsigned short)((unsigned char)v3 < 2) | ((unsigned short)1 << 1) | ((unsigned short)__parity__((unsigned char)v3 - 2) << 2) | ((unsigned short)0 << 3) | ((unsigned short)(((((unsigned char)v3 - 2) ^ ((unsigned char)v3 ^ 0x2)) >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)((unsigned char)v3 == 2) << 6) | ((unsigned short)((unsigned char)v3 < 2) << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v10 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_3_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = -1548650108;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)134 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_3_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 826196200;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)1666 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_3_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 2;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)70 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_3_mv_plain() {
    return 0;
}

int cmov_l_with_code_4_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    int v3 = *(int*)0x1000;
    int v4 = *(int*)0x1004;
    int v5 = *(int*)0x1008;
    int v6 = *(int*)0x100C;
    int v7 = *(int*)0x1010;
    int v8 = *(int*)0x1014;
    int v9 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v10 = ((((unsigned char)v3 - 2) ^ (unsigned char)v3) & ((unsigned char)v3 ^ 0x2)) < 0;
    *(int*)0x2000 = v3;
    *(int*)0x2004 = (unsigned char)v3 == 2 ? v3: v4;
    *(int*)0x2008 = v5;
    *(int*)0x200C = v6;
    *(int*)0x2010 = v7;
    *(int*)0x2014 = v8;
    *(int*)0x2018 = v9;
    *(char*)0x2200 = v10 ? 1: 0;
    *(char*)0x2201 = v10 ? 0: 1;
    *(char*)0x2202 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2203 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x2204 = (unsigned char)v3 == 2 ? 1: 0;
    *(char*)0x2205 = (unsigned char)v3 == 2 ? 0: 1;
    *(char*)0x2206 = (unsigned char)v3 <= 2 ? 1: 0;
    *(char*)0x2207 = (unsigned char)v3 <= 2 ? 0: 1;
    *(char*)0x2208 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2209 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x220A = __parity__((unsigned char)v3 - 2) ? 1: 0;
    *(char*)0x220B = __parity__((unsigned char)v3 - 2) ? 0: 1;
    *(char*)0x220C = (unsigned char)v3 < 2 != v10 ? 1: 0;
    *(char*)0x220D = (unsigned char)v3 < 2 != v10 ? 0: 1;
    *(char*)0x220E = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v10 ? 1: 0;
    *(char*)0x220F = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v10 ? 0: 1;
    *(short*)0x2100 = (unsigned short)((unsigned char)v3 < 2) | ((unsigned short)1 << 1) | ((unsigned short)__parity__((unsigned char)v3 - 2) << 2) | ((unsigned short)0 << 3) | ((unsigned short)(((((unsigned char)v3 - 2) ^ ((unsigned char)v3 ^ 0x2)) >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)((unsigned char)v3 == 2) << 6) | ((unsigned short)((unsigned char)v3 < 2) << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v10 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_4_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)134 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_4_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)1666 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_4_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 2;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)70 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_4_mv_plain() {
    return 0;
}

int cmov_l_with_code_5_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    int v3 = *(int*)0x1000;
    int v4 = *(int*)0x1004;
    int v5 = *(int*)0x1008;
    int v6 = *(int*)0x100C;
    int v7 = *(int*)0x1010;
    int v8 = *(int*)0x1014;
    int v9 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v10 = ((((unsigned char)v3 - 2) ^ (unsigned char)v3) & ((unsigned char)v3 ^ 0x2)) < 0;
    *(int*)0x2000 = v3;
    *(int*)0x2004 = (unsigned char)v3 == 2 ? v4: v3;
    *(int*)0x2008 = v5;
    *(int*)0x200C = v6;
    *(int*)0x2010 = v7;
    *(int*)0x2014 = v8;
    *(int*)0x2018 = v9;
    *(char*)0x2200 = v10 ? 1: 0;
    *(char*)0x2201 = v10 ? 0: 1;
    *(char*)0x2202 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2203 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x2204 = (unsigned char)v3 == 2 ? 1: 0;
    *(char*)0x2205 = (unsigned char)v3 == 2 ? 0: 1;
    *(char*)0x2206 = (unsigned char)v3 <= 2 ? 1: 0;
    *(char*)0x2207 = (unsigned char)v3 <= 2 ? 0: 1;
    *(char*)0x2208 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2209 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x220A = __parity__((unsigned char)v3 - 2) ? 1: 0;
    *(char*)0x220B = __parity__((unsigned char)v3 - 2) ? 0: 1;
    *(char*)0x220C = (unsigned char)v3 < 2 != v10 ? 1: 0;
    *(char*)0x220D = (unsigned char)v3 < 2 != v10 ? 0: 1;
    *(char*)0x220E = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v10 ? 1: 0;
    *(char*)0x220F = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v10 ? 0: 1;
    *(short*)0x2100 = (unsigned short)((unsigned char)v3 < 2) | ((unsigned short)1 << 1) | ((unsigned short)__parity__((unsigned char)v3 - 2) << 2) | ((unsigned short)0 << 3) | ((unsigned short)(((((unsigned char)v3 - 2) ^ ((unsigned char)v3 ^ 0x2)) >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)((unsigned char)v3 == 2) << 6) | ((unsigned short)((unsigned char)v3 < 2) << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v10 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_5_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = -1548650108;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)134 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_5_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 826196200;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)1666 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_5_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)70 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_5_mv_plain() {
    return 0;
}

int cmov_l_with_code_6_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    int v3 = *(int*)0x1000;
    int v4 = *(int*)0x1004;
    int v5 = *(int*)0x1008;
    int v6 = *(int*)0x100C;
    int v7 = *(int*)0x1010;
    int v8 = *(int*)0x1014;
    int v9 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v10 = ((((unsigned char)v3 - 2) ^ (unsigned char)v3) & ((unsigned char)v3 ^ 0x2)) < 0;
    *(int*)0x2000 = v3;
    *(int*)0x2004 = (unsigned char)v3 <= 2 ? v3: v4;
    *(int*)0x2008 = v5;
    *(int*)0x200C = v6;
    *(int*)0x2010 = v7;
    *(int*)0x2014 = v8;
    *(int*)0x2018 = v9;
    *(char*)0x2200 = v10 ? 1: 0;
    *(char*)0x2201 = v10 ? 0: 1;
    *(char*)0x2202 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2203 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x2204 = (unsigned char)v3 == 2 ? 1: 0;
    *(char*)0x2205 = (unsigned char)v3 == 2 ? 0: 1;
    *(char*)0x2206 = (unsigned char)v3 <= 2 ? 1: 0;
    *(char*)0x2207 = (unsigned char)v3 <= 2 ? 0: 1;
    *(char*)0x2208 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2209 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x220A = __parity__((unsigned char)v3 - 2) ? 1: 0;
    *(char*)0x220B = __parity__((unsigned char)v3 - 2) ? 0: 1;
    *(char*)0x220C = (unsigned char)v3 < 2 != v10 ? 1: 0;
    *(char*)0x220D = (unsigned char)v3 < 2 != v10 ? 0: 1;
    *(char*)0x220E = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v10 ? 1: 0;
    *(char*)0x220F = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v10 ? 0: 1;
    *(short*)0x2100 = (unsigned short)((unsigned char)v3 < 2) | ((unsigned short)1 << 1) | ((unsigned short)__parity__((unsigned char)v3 - 2) << 2) | ((unsigned short)0 << 3) | ((unsigned short)(((((unsigned char)v3 - 2) ^ ((unsigned char)v3 ^ 0x2)) >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)((unsigned char)v3 == 2) << 6) | ((unsigned short)((unsigned char)v3 < 2) << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v10 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_6_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)134 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_6_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)1666 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_6_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 2;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)70 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_6_mv_plain() {
    return 0;
}

int cmov_l_with_code_7_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    int v3 = *(int*)0x1000;
    int v4 = *(int*)0x1004;
    int v5 = *(int*)0x1008;
    int v6 = *(int*)0x100C;
    int v7 = *(int*)0x1010;
    int v8 = *(int*)0x1014;
    int v9 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v10 = ((((unsigned char)v3 - 2) ^ (unsigned char)v3) & ((unsigned char)v3 ^ 0x2)) < 0;
    *(int*)0x2000 = v3;
    *(int*)0x2004 = (unsigned char)v3 <= 2 ? v4: v3;
    *(int*)0x2008 = v5;
    *(int*)0x200C = v6;
    *(int*)0x2010 = v7;
    *(int*)0x2014 = v8;
    *(int*)0x2018 = v9;
    *(char*)0x2200 = v10 ? 1: 0;
    *(char*)0x2201 = v10 ? 0: 1;
    *(char*)0x2202 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2203 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x2204 = (unsigned char)v3 == 2 ? 1: 0;
    *(char*)0x2205 = (unsigned char)v3 == 2 ? 0: 1;
    *(char*)0x2206 = (unsigned char)v3 <= 2 ? 1: 0;
    *(char*)0x2207 = (unsigned char)v3 <= 2 ? 0: 1;
    *(char*)0x2208 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2209 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x220A = __parity__((unsigned char)v3 - 2) ? 1: 0;
    *(char*)0x220B = __parity__((unsigned char)v3 - 2) ? 0: 1;
    *(char*)0x220C = (unsigned char)v3 < 2 != v10 ? 1: 0;
    *(char*)0x220D = (unsigned char)v3 < 2 != v10 ? 0: 1;
    *(char*)0x220E = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v10 ? 1: 0;
    *(char*)0x220F = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v10 ? 0: 1;
    *(short*)0x2100 = (unsigned short)((unsigned char)v3 < 2) | ((unsigned short)1 << 1) | ((unsigned short)__parity__((unsigned char)v3 - 2) << 2) | ((unsigned short)0 << 3) | ((unsigned short)(((((unsigned char)v3 - 2) ^ ((unsigned char)v3 ^ 0x2)) >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)((unsigned char)v3 == 2) << 6) | ((unsigned short)((unsigned char)v3 < 2) << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v10 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_7_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = -1548650108;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)134 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_7_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 826196200;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)1666 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_7_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)70 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_7_mv_plain() {
    return 0;
}

int cmov_l_with_code_8_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    int v3 = *(int*)0x1000;
    int v4 = *(int*)0x1004;
    int v5 = *(int*)0x1008;
    int v6 = *(int*)0x100C;
    int v7 = *(int*)0x1010;
    int v8 = *(int*)0x1014;
    int v9 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v10 = ((((unsigned char)v3 - 2) ^ (unsigned char)v3) & ((unsigned char)v3 ^ 0x2)) < 0;
    *(int*)0x2000 = v3;
    *(int*)0x2004 = (unsigned char)v3 < 2 ? v3: v4;
    *(int*)0x2008 = v5;
    *(int*)0x200C = v6;
    *(int*)0x2010 = v7;
    *(int*)0x2014 = v8;
    *(int*)0x2018 = v9;
    *(char*)0x2200 = v10 ? 1: 0;
    *(char*)0x2201 = v10 ? 0: 1;
    *(char*)0x2202 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2203 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x2204 = (unsigned char)v3 == 2 ? 1: 0;
    *(char*)0x2205 = (unsigned char)v3 == 2 ? 0: 1;
    *(char*)0x2206 = (unsigned char)v3 <= 2 ? 1: 0;
    *(char*)0x2207 = (unsigned char)v3 <= 2 ? 0: 1;
    *(char*)0x2208 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2209 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x220A = __parity__((unsigned char)v3 - 2) ? 1: 0;
    *(char*)0x220B = __parity__((unsigned char)v3 - 2) ? 0: 1;
    *(char*)0x220C = (unsigned char)v3 < 2 != v10 ? 1: 0;
    *(char*)0x220D = (unsigned char)v3 < 2 != v10 ? 0: 1;
    *(char*)0x220E = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v10 ? 1: 0;
    *(char*)0x220F = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v10 ? 0: 1;
    *(short*)0x2100 = (unsigned short)((unsigned char)v3 < 2) | ((unsigned short)1 << 1) | ((unsigned short)__parity__((unsigned char)v3 - 2) << 2) | ((unsigned short)0 << 3) | ((unsigned short)(((((unsigned char)v3 - 2) ^ ((unsigned char)v3 ^ 0x2)) >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)((unsigned char)v3 == 2) << 6) | ((unsigned short)((unsigned char)v3 < 2) << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v10 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_8_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = -1548650108;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)134 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_8_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 826196200;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)1666 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_8_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)70 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_8_mv_plain() {
    return 0;
}

int cmov_l_with_code_9_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    int v3 = *(int*)0x1000;
    int v4 = *(int*)0x1004;
    int v5 = *(int*)0x1008;
    int v6 = *(int*)0x100C;
    int v7 = *(int*)0x1010;
    int v8 = *(int*)0x1014;
    int v9 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v10 = ((((unsigned char)v3 - 2) ^ (unsigned char)v3) & ((unsigned char)v3 ^ 0x2)) < 0;
    *(int*)0x2000 = v3;
    *(int*)0x2004 = (unsigned char)v3 < 2 ? v4: v3;
    *(int*)0x2008 = v5;
    *(int*)0x200C = v6;
    *(int*)0x2010 = v7;
    *(int*)0x2014 = v8;
    *(int*)0x2018 = v9;
    *(char*)0x2200 = v10 ? 1: 0;
    *(char*)0x2201 = v10 ? 0: 1;
    *(char*)0x2202 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2203 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x2204 = (unsigned char)v3 == 2 ? 1: 0;
    *(char*)0x2205 = (unsigned char)v3 == 2 ? 0: 1;
    *(char*)0x2206 = (unsigned char)v3 <= 2 ? 1: 0;
    *(char*)0x2207 = (unsigned char)v3 <= 2 ? 0: 1;
    *(char*)0x2208 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2209 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x220A = __parity__((unsigned char)v3 - 2) ? 1: 0;
    *(char*)0x220B = __parity__((unsigned char)v3 - 2) ? 0: 1;
    *(char*)0x220C = (unsigned char)v3 < 2 != v10 ? 1: 0;
    *(char*)0x220D = (unsigned char)v3 < 2 != v10 ? 0: 1;
    *(char*)0x220E = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v10 ? 1: 0;
    *(char*)0x220F = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v10 ? 0: 1;
    *(short*)0x2100 = (unsigned short)((unsigned char)v3 < 2) | ((unsigned short)1 << 1) | ((unsigned short)__parity__((unsigned char)v3 - 2) << 2) | ((unsigned short)0 << 3) | ((unsigned short)(((((unsigned char)v3 - 2) ^ ((unsigned char)v3 ^ 0x2)) >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)((unsigned char)v3 == 2) << 6) | ((unsigned short)((unsigned char)v3 < 2) << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v10 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_9_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)134 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_9_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)1666 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_9_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 2;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)70 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_9_mv_plain() {
    return 0;
}

int cmov_l_with_code_a_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    int v3 = *(int*)0x1000;
    int v4 = *(int*)0x1004;
    int v5 = *(int*)0x1008;
    int v6 = *(int*)0x100C;
    int v7 = *(int*)0x1010;
    int v8 = *(int*)0x1014;
    int v9 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v10 = ((((unsigned char)v3 - 2) ^ (unsigned char)v3) & ((unsigned char)v3 ^ 0x2)) < 0;
    *(int*)0x2000 = v3;
    *(int*)0x2004 = __parity__((unsigned char)v3 - 2) ? v3: v4;
    *(int*)0x2008 = v5;
    *(int*)0x200C = v6;
    *(int*)0x2010 = v7;
    *(int*)0x2014 = v8;
    *(int*)0x2018 = v9;
    *(char*)0x2200 = v10 ? 1: 0;
    *(char*)0x2201 = v10 ? 0: 1;
    *(char*)0x2202 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2203 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x2204 = (unsigned char)v3 == 2 ? 1: 0;
    *(char*)0x2205 = (unsigned char)v3 == 2 ? 0: 1;
    *(char*)0x2206 = (unsigned char)v3 <= 2 ? 1: 0;
    *(char*)0x2207 = (unsigned char)v3 <= 2 ? 0: 1;
    *(char*)0x2208 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2209 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x220A = __parity__((unsigned char)v3 - 2) ? 1: 0;
    *(char*)0x220B = __parity__((unsigned char)v3 - 2) ? 0: 1;
    *(char*)0x220C = (unsigned char)v3 < 2 != v10 ? 1: 0;
    *(char*)0x220D = (unsigned char)v3 < 2 != v10 ? 0: 1;
    *(char*)0x220E = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v10 ? 1: 0;
    *(char*)0x220F = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v10 ? 0: 1;
    *(short*)0x2100 = (unsigned short)((unsigned char)v3 < 2) | ((unsigned short)1 << 1) | ((unsigned short)__parity__((unsigned char)v3 - 2) << 2) | ((unsigned short)0 << 3) | ((unsigned short)(((((unsigned char)v3 - 2) ^ ((unsigned char)v3 ^ 0x2)) >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)((unsigned char)v3 == 2) << 6) | ((unsigned short)((unsigned char)v3 < 2) << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v10 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_a_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = -1548650108;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)134 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_a_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)1666 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_a_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 2;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)70 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_a_mv_plain() {
    return 0;
}

int cmov_l_with_code_b_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    int v3 = *(int*)0x1000;
    int v4 = *(int*)0x1004;
    int v5 = *(int*)0x1008;
    int v6 = *(int*)0x100C;
    int v7 = *(int*)0x1010;
    int v8 = *(int*)0x1014;
    int v9 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v10 = ((((unsigned char)v3 - 2) ^ (unsigned char)v3) & ((unsigned char)v3 ^ 0x2)) < 0;
    *(int*)0x2000 = v3;
    *(int*)0x2004 = __parity__((unsigned char)v3 - 2) ? v4: v3;
    *(int*)0x2008 = v5;
    *(int*)0x200C = v6;
    *(int*)0x2010 = v7;
    *(int*)0x2014 = v8;
    *(int*)0x2018 = v9;
    *(char*)0x2200 = v10 ? 1: 0;
    *(char*)0x2201 = v10 ? 0: 1;
    *(char*)0x2202 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2203 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x2204 = (unsigned char)v3 == 2 ? 1: 0;
    *(char*)0x2205 = (unsigned char)v3 == 2 ? 0: 1;
    *(char*)0x2206 = (unsigned char)v3 <= 2 ? 1: 0;
    *(char*)0x2207 = (unsigned char)v3 <= 2 ? 0: 1;
    *(char*)0x2208 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2209 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x220A = __parity__((unsigned char)v3 - 2) ? 1: 0;
    *(char*)0x220B = __parity__((unsigned char)v3 - 2) ? 0: 1;
    *(char*)0x220C = (unsigned char)v3 < 2 != v10 ? 1: 0;
    *(char*)0x220D = (unsigned char)v3 < 2 != v10 ? 0: 1;
    *(char*)0x220E = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v10 ? 1: 0;
    *(char*)0x220F = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v10 ? 0: 1;
    *(short*)0x2100 = (unsigned short)((unsigned char)v3 < 2) | ((unsigned short)1 << 1) | ((unsigned short)__parity__((unsigned char)v3 - 2) << 2) | ((unsigned short)0 << 3) | ((unsigned short)(((((unsigned char)v3 - 2) ^ ((unsigned char)v3 ^ 0x2)) >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)((unsigned char)v3 == 2) << 6) | ((unsigned short)((unsigned char)v3 < 2) << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v10 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_b_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)134 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_b_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 826196200;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)1666 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_b_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)70 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_b_mv_plain() {
    return 0;
}

int cmov_l_with_code_c_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    int v3 = *(int*)0x1000;
    int v4 = *(int*)0x1004;
    int v5 = *(int*)0x1008;
    int v6 = *(int*)0x100C;
    int v7 = *(int*)0x1010;
    int v8 = *(int*)0x1014;
    int v9 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v10 = ((((unsigned char)v3 - 2) ^ (unsigned char)v3) & ((unsigned char)v3 ^ 0x2)) < 0;
    *(int*)0x2000 = v3;
    *(int*)0x2004 = (unsigned char)v3 < 2 != v10 ? v3: v4;
    *(int*)0x2008 = v5;
    *(int*)0x200C = v6;
    *(int*)0x2010 = v7;
    *(int*)0x2014 = v8;
    *(int*)0x2018 = v9;
    *(char*)0x2200 = v10 ? 1: 0;
    *(char*)0x2201 = v10 ? 0: 1;
    *(char*)0x2202 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2203 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x2204 = (unsigned char)v3 == 2 ? 1: 0;
    *(char*)0x2205 = (unsigned char)v3 == 2 ? 0: 1;
    *(char*)0x2206 = (unsigned char)v3 <= 2 ? 1: 0;
    *(char*)0x2207 = (unsigned char)v3 <= 2 ? 0: 1;
    *(char*)0x2208 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2209 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x220A = __parity__((unsigned char)v3 - 2) ? 1: 0;
    *(char*)0x220B = __parity__((unsigned char)v3 - 2) ? 0: 1;
    *(char*)0x220C = (unsigned char)v3 < 2 != v10 ? 1: 0;
    *(char*)0x220D = (unsigned char)v3 < 2 != v10 ? 0: 1;
    *(char*)0x220E = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v10 ? 1: 0;
    *(char*)0x220F = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v10 ? 0: 1;
    *(short*)0x2100 = (unsigned short)((unsigned char)v3 < 2) | ((unsigned short)1 << 1) | ((unsigned short)__parity__((unsigned char)v3 - 2) << 2) | ((unsigned short)0 << 3) | ((unsigned short)(((((unsigned char)v3 - 2) ^ ((unsigned char)v3 ^ 0x2)) >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)((unsigned char)v3 == 2) << 6) | ((unsigned short)((unsigned char)v3 < 2) << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v10 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_c_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = -1548650108;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)134 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_c_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 826196200;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)1666 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_c_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)70 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_c_mv_plain() {
    return 0;
}

int cmov_l_with_code_d_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    int v3 = *(int*)0x1000;
    int v4 = *(int*)0x1004;
    int v5 = *(int*)0x1008;
    int v6 = *(int*)0x100C;
    int v7 = *(int*)0x1010;
    int v8 = *(int*)0x1014;
    int v9 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v10 = ((((unsigned char)v3 - 2) ^ (unsigned char)v3) & ((unsigned char)v3 ^ 0x2)) < 0;
    *(int*)0x2000 = v3;
    *(int*)0x2004 = (unsigned char)v3 < 2 != v10 ? v4: v3;
    *(int*)0x2008 = v5;
    *(int*)0x200C = v6;
    *(int*)0x2010 = v7;
    *(int*)0x2014 = v8;
    *(int*)0x2018 = v9;
    *(char*)0x2200 = v10 ? 1: 0;
    *(char*)0x2201 = v10 ? 0: 1;
    *(char*)0x2202 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2203 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x2204 = (unsigned char)v3 == 2 ? 1: 0;
    *(char*)0x2205 = (unsigned char)v3 == 2 ? 0: 1;
    *(char*)0x2206 = (unsigned char)v3 <= 2 ? 1: 0;
    *(char*)0x2207 = (unsigned char)v3 <= 2 ? 0: 1;
    *(char*)0x2208 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2209 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x220A = __parity__((unsigned char)v3 - 2) ? 1: 0;
    *(char*)0x220B = __parity__((unsigned char)v3 - 2) ? 0: 1;
    *(char*)0x220C = (unsigned char)v3 < 2 != v10 ? 1: 0;
    *(char*)0x220D = (unsigned char)v3 < 2 != v10 ? 0: 1;
    *(char*)0x220E = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v10 ? 1: 0;
    *(char*)0x220F = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v10 ? 0: 1;
    *(short*)0x2100 = (unsigned short)((unsigned char)v3 < 2) | ((unsigned short)1 << 1) | ((unsigned short)__parity__((unsigned char)v3 - 2) << 2) | ((unsigned short)0 << 3) | ((unsigned short)(((((unsigned char)v3 - 2) ^ ((unsigned char)v3 ^ 0x2)) >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)((unsigned char)v3 == 2) << 6) | ((unsigned short)((unsigned char)v3 < 2) << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v10 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_d_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)134 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_d_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)1666 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_d_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 2;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)70 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_d_mv_plain() {
    return 0;
}

int cmov_l_with_code_e_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    int v3 = *(int*)0x1000;
    int v4 = *(int*)0x1004;
    int v5 = *(int*)0x1008;
    int v6 = *(int*)0x100C;
    int v7 = *(int*)0x1010;
    int v8 = *(int*)0x1014;
    int v9 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v10 = ((((unsigned char)v3 - 2) ^ (unsigned char)v3) & ((unsigned char)v3 ^ 0x2)) < 0;
    *(int*)0x2000 = v3;
    *(int*)0x2004 = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v10 ? v3: v4;
    *(int*)0x2008 = v5;
    *(int*)0x200C = v6;
    *(int*)0x2010 = v7;
    *(int*)0x2014 = v8;
    *(int*)0x2018 = v9;
    *(char*)0x2200 = v10 ? 1: 0;
    *(char*)0x2201 = v10 ? 0: 1;
    *(char*)0x2202 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2203 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x2204 = (unsigned char)v3 == 2 ? 1: 0;
    *(char*)0x2205 = (unsigned char)v3 == 2 ? 0: 1;
    *(char*)0x2206 = (unsigned char)v3 <= 2 ? 1: 0;
    *(char*)0x2207 = (unsigned char)v3 <= 2 ? 0: 1;
    *(char*)0x2208 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2209 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x220A = __parity__((unsigned char)v3 - 2) ? 1: 0;
    *(char*)0x220B = __parity__((unsigned char)v3 - 2) ? 0: 1;
    *(char*)0x220C = (unsigned char)v3 < 2 != v10 ? 1: 0;
    *(char*)0x220D = (unsigned char)v3 < 2 != v10 ? 0: 1;
    *(char*)0x220E = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v10 ? 1: 0;
    *(char*)0x220F = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v10 ? 0: 1;
    *(short*)0x2100 = (unsigned short)((unsigned char)v3 < 2) | ((unsigned short)1 << 1) | ((unsigned short)__parity__((unsigned char)v3 - 2) << 2) | ((unsigned short)0 << 3) | ((unsigned short)(((((unsigned char)v3 - 2) ^ ((unsigned char)v3 ^ 0x2)) >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)((unsigned char)v3 == 2) << 6) | ((unsigned short)((unsigned char)v3 < 2) << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v10 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_e_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = -1548650108;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)134 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_e_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 826196200;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)1666 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_e_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 2;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)70 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_e_mv_plain() {
    return 0;
}

int cmov_l_with_code_f_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    int v3 = *(int*)0x1000;
    int v4 = *(int*)0x1004;
    int v5 = *(int*)0x1008;
    int v6 = *(int*)0x100C;
    int v7 = *(int*)0x1010;
    int v8 = *(int*)0x1014;
    int v9 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v10 = ((((unsigned char)v3 - 2) ^ (unsigned char)v3) & ((unsigned char)v3 ^ 0x2)) < 0;
    *(int*)0x2000 = v3;
    *(int*)0x2004 = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v10 ? v4: v3;
    *(int*)0x2008 = v5;
    *(int*)0x200C = v6;
    *(int*)0x2010 = v7;
    *(int*)0x2014 = v8;
    *(int*)0x2018 = v9;
    *(char*)0x2200 = v10 ? 1: 0;
    *(char*)0x2201 = v10 ? 0: 1;
    *(char*)0x2202 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2203 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x2204 = (unsigned char)v3 == 2 ? 1: 0;
    *(char*)0x2205 = (unsigned char)v3 == 2 ? 0: 1;
    *(char*)0x2206 = (unsigned char)v3 <= 2 ? 1: 0;
    *(char*)0x2207 = (unsigned char)v3 <= 2 ? 0: 1;
    *(char*)0x2208 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2209 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x220A = __parity__((unsigned char)v3 - 2) ? 1: 0;
    *(char*)0x220B = __parity__((unsigned char)v3 - 2) ? 0: 1;
    *(char*)0x220C = (unsigned char)v3 < 2 != v10 ? 1: 0;
    *(char*)0x220D = (unsigned char)v3 < 2 != v10 ? 0: 1;
    *(char*)0x220E = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v10 ? 1: 0;
    *(char*)0x220F = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v10 ? 0: 1;
    *(short*)0x2100 = (unsigned short)((unsigned char)v3 < 2) | ((unsigned short)1 << 1) | ((unsigned short)__parity__((unsigned char)v3 - 2) << 2) | ((unsigned short)0 << 3) | ((unsigned short)(((((unsigned char)v3 - 2) ^ ((unsigned char)v3 ^ 0x2)) >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)((unsigned char)v3 == 2) << 6) | ((unsigned short)((unsigned char)v3 < 2) << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v10 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_f_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)134 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_f_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)1666 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_f_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)70 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_l_with_code_f_mv_plain() {
    return 0;
}

int cmov_w_with_code_0_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    short v3 = (unsigned short)*(int*)0x1000;
    short v4 = (unsigned short)(*(int*)0x1000 >>> 16);
    short v5 = (unsigned short)*(int*)0x1004;
    short v6 = (unsigned short)(*(int*)0x1004 >>> 16);
    int v7 = *(int*)0x1008;
    int v8 = *(int*)0x100C;
    int v9 = *(int*)0x1010;
    int v10 = *(int*)0x1014;
    int v11 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v12 = ((((unsigned char)v3 - 2) ^ (unsigned char)v3) & ((unsigned char)v3 ^ 0x2)) < 0;
    *(int*)0x2000 = (unsigned int)v3 | ((unsigned int)v4 << 16);
    *(int*)0x2004 = (unsigned int)(v12 ? v3: v5) | ((unsigned int)v6 << 16);
    *(int*)0x2008 = v7;
    *(int*)0x200C = v8;
    *(int*)0x2010 = v9;
    *(int*)0x2014 = v10;
    *(int*)0x2018 = v11;
    *(char*)0x2200 = v12 ? 1: 0;
    *(char*)0x2201 = v12 ? 0: 1;
    *(char*)0x2202 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2203 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x2204 = (unsigned char)v3 == 2 ? 1: 0;
    *(char*)0x2205 = (unsigned char)v3 == 2 ? 0: 1;
    *(char*)0x2206 = (unsigned char)v3 <= 2 ? 1: 0;
    *(char*)0x2207 = (unsigned char)v3 <= 2 ? 0: 1;
    *(char*)0x2208 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2209 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x220A = __parity__((unsigned char)v3 - 2) ? 1: 0;
    *(char*)0x220B = __parity__((unsigned char)v3 - 2) ? 0: 1;
    *(char*)0x220C = (unsigned char)v3 < 2 != v12 ? 1: 0;
    *(char*)0x220D = (unsigned char)v3 < 2 != v12 ? 0: 1;
    *(char*)0x220E = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v12 ? 1: 0;
    *(char*)0x220F = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v12 ? 0: 1;
    *(short*)0x2100 = (unsigned short)((unsigned char)v3 < 2) | ((unsigned short)1 << 1) | ((unsigned short)__parity__((unsigned char)v3 - 2) << 2) | ((unsigned short)0 << 3) | ((unsigned short)(((((unsigned char)v3 - 2) ^ ((unsigned char)v3 ^ 0x2)) >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)((unsigned char)v3 == 2) << 6) | ((unsigned short)((unsigned char)v3 < 2) << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v12 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_0_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)134 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_0_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)1666 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_0_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)70 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_0_plain() {
    return 0;
}

int cmov_w_with_code_1_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    short v3 = (unsigned short)*(int*)0x1000;
    short v4 = (unsigned short)(*(int*)0x1000 >>> 16);
    short v5 = (unsigned short)*(int*)0x1004;
    short v6 = (unsigned short)(*(int*)0x1004 >>> 16);
    int v7 = *(int*)0x1008;
    int v8 = *(int*)0x100C;
    int v9 = *(int*)0x1010;
    int v10 = *(int*)0x1014;
    int v11 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v12 = ((((unsigned char)v3 - 2) ^ (unsigned char)v3) & ((unsigned char)v3 ^ 0x2)) < 0;
    *(int*)0x2000 = (unsigned int)v3 | ((unsigned int)v4 << 16);
    *(int*)0x2004 = (unsigned int)(v12 ? v5: v3) | ((unsigned int)v6 << 16);
    *(int*)0x2008 = v7;
    *(int*)0x200C = v8;
    *(int*)0x2010 = v9;
    *(int*)0x2014 = v10;
    *(int*)0x2018 = v11;
    *(char*)0x2200 = v12 ? 1: 0;
    *(char*)0x2201 = v12 ? 0: 1;
    *(char*)0x2202 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2203 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x2204 = (unsigned char)v3 == 2 ? 1: 0;
    *(char*)0x2205 = (unsigned char)v3 == 2 ? 0: 1;
    *(char*)0x2206 = (unsigned char)v3 <= 2 ? 1: 0;
    *(char*)0x2207 = (unsigned char)v3 <= 2 ? 0: 1;
    *(char*)0x2208 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2209 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x220A = __parity__((unsigned char)v3 - 2) ? 1: 0;
    *(char*)0x220B = __parity__((unsigned char)v3 - 2) ? 0: 1;
    *(char*)0x220C = (unsigned char)v3 < 2 != v12 ? 1: 0;
    *(char*)0x220D = (unsigned char)v3 < 2 != v12 ? 0: 1;
    *(char*)0x220E = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v12 ? 1: 0;
    *(char*)0x220F = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v12 ? 0: 1;
    *(short*)0x2100 = (unsigned short)((unsigned char)v3 < 2) | ((unsigned short)1 << 1) | ((unsigned short)__parity__((unsigned char)v3 - 2) << 2) | ((unsigned short)0 << 3) | ((unsigned short)(((((unsigned char)v3 - 2) ^ ((unsigned char)v3 ^ 0x2)) >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)((unsigned char)v3 == 2) << 6) | ((unsigned short)((unsigned char)v3 < 2) << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v12 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_1_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6677984;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)134 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_1_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 1231995112;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)1666 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_1_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 2;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)70 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_1_mv_plain() {
    return 0;
}

int cmov_w_with_code_2_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    short v3 = (unsigned short)*(int*)0x1000;
    short v4 = (unsigned short)(*(int*)0x1000 >>> 16);
    short v5 = (unsigned short)*(int*)0x1004;
    short v6 = (unsigned short)(*(int*)0x1004 >>> 16);
    int v7 = *(int*)0x1008;
    int v8 = *(int*)0x100C;
    int v9 = *(int*)0x1010;
    int v10 = *(int*)0x1014;
    int v11 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v12 = ((((unsigned char)v3 - 2) ^ (unsigned char)v3) & ((unsigned char)v3 ^ 0x2)) < 0;
    *(int*)0x2000 = (unsigned int)v3 | ((unsigned int)v4 << 16);
    *(int*)0x2004 = (unsigned int)((unsigned char)v3 < 2 ? v3: v5) | ((unsigned int)v6 << 16);
    *(int*)0x2008 = v7;
    *(int*)0x200C = v8;
    *(int*)0x2010 = v9;
    *(int*)0x2014 = v10;
    *(int*)0x2018 = v11;
    *(char*)0x2200 = v12 ? 1: 0;
    *(char*)0x2201 = v12 ? 0: 1;
    *(char*)0x2202 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2203 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x2204 = (unsigned char)v3 == 2 ? 1: 0;
    *(char*)0x2205 = (unsigned char)v3 == 2 ? 0: 1;
    *(char*)0x2206 = (unsigned char)v3 <= 2 ? 1: 0;
    *(char*)0x2207 = (unsigned char)v3 <= 2 ? 0: 1;
    *(char*)0x2208 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2209 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x220A = __parity__((unsigned char)v3 - 2) ? 1: 0;
    *(char*)0x220B = __parity__((unsigned char)v3 - 2) ? 0: 1;
    *(char*)0x220C = (unsigned char)v3 < 2 != v12 ? 1: 0;
    *(char*)0x220D = (unsigned char)v3 < 2 != v12 ? 0: 1;
    *(char*)0x220E = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v12 ? 1: 0;
    *(char*)0x220F = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v12 ? 0: 1;
    *(short*)0x2100 = (unsigned short)((unsigned char)v3 < 2) | ((unsigned short)1 << 1) | ((unsigned short)__parity__((unsigned char)v3 - 2) << 2) | ((unsigned short)0 << 3) | ((unsigned short)(((((unsigned char)v3 - 2) ^ ((unsigned char)v3 ^ 0x2)) >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)((unsigned char)v3 == 2) << 6) | ((unsigned short)((unsigned char)v3 < 2) << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v12 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_2_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)134 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_2_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)1666 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_2_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)70 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_2_mv_plain() {
    return 0;
}

int cmov_w_with_code_3_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    short v3 = (unsigned short)*(int*)0x1000;
    short v4 = (unsigned short)(*(int*)0x1000 >>> 16);
    short v5 = (unsigned short)*(int*)0x1004;
    short v6 = (unsigned short)(*(int*)0x1004 >>> 16);
    int v7 = *(int*)0x1008;
    int v8 = *(int*)0x100C;
    int v9 = *(int*)0x1010;
    int v10 = *(int*)0x1014;
    int v11 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v12 = ((((unsigned char)v3 - 2) ^ (unsigned char)v3) & ((unsigned char)v3 ^ 0x2)) < 0;
    *(int*)0x2000 = (unsigned int)v3 | ((unsigned int)v4 << 16);
    *(int*)0x2004 = (unsigned int)((unsigned char)v3 < 2 ? v5: v3) | ((unsigned int)v6 << 16);
    *(int*)0x2008 = v7;
    *(int*)0x200C = v8;
    *(int*)0x2010 = v9;
    *(int*)0x2014 = v10;
    *(int*)0x2018 = v11;
    *(char*)0x2200 = v12 ? 1: 0;
    *(char*)0x2201 = v12 ? 0: 1;
    *(char*)0x2202 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2203 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x2204 = (unsigned char)v3 == 2 ? 1: 0;
    *(char*)0x2205 = (unsigned char)v3 == 2 ? 0: 1;
    *(char*)0x2206 = (unsigned char)v3 <= 2 ? 1: 0;
    *(char*)0x2207 = (unsigned char)v3 <= 2 ? 0: 1;
    *(char*)0x2208 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2209 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x220A = __parity__((unsigned char)v3 - 2) ? 1: 0;
    *(char*)0x220B = __parity__((unsigned char)v3 - 2) ? 0: 1;
    *(char*)0x220C = (unsigned char)v3 < 2 != v12 ? 1: 0;
    *(char*)0x220D = (unsigned char)v3 < 2 != v12 ? 0: 1;
    *(char*)0x220E = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v12 ? 1: 0;
    *(char*)0x220F = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v12 ? 0: 1;
    *(short*)0x2100 = (unsigned short)((unsigned char)v3 < 2) | ((unsigned short)1 << 1) | ((unsigned short)__parity__((unsigned char)v3 - 2) << 2) | ((unsigned short)0 << 3) | ((unsigned short)(((((unsigned char)v3 - 2) ^ ((unsigned char)v3 ^ 0x2)) >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)((unsigned char)v3 == 2) << 6) | ((unsigned short)((unsigned char)v3 < 2) << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v12 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_3_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6677984;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)134 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_3_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 1231995112;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)1666 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_3_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 2;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)70 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_3_mv_plain() {
    return 0;
}

int cmov_w_with_code_4_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    short v3 = (unsigned short)*(int*)0x1000;
    short v4 = (unsigned short)(*(int*)0x1000 >>> 16);
    short v5 = (unsigned short)*(int*)0x1004;
    short v6 = (unsigned short)(*(int*)0x1004 >>> 16);
    int v7 = *(int*)0x1008;
    int v8 = *(int*)0x100C;
    int v9 = *(int*)0x1010;
    int v10 = *(int*)0x1014;
    int v11 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v12 = ((((unsigned char)v3 - 2) ^ (unsigned char)v3) & ((unsigned char)v3 ^ 0x2)) < 0;
    *(int*)0x2000 = (unsigned int)v3 | ((unsigned int)v4 << 16);
    *(int*)0x2004 = (unsigned int)((unsigned char)v3 == 2 ? v3: v5) | ((unsigned int)v6 << 16);
    *(int*)0x2008 = v7;
    *(int*)0x200C = v8;
    *(int*)0x2010 = v9;
    *(int*)0x2014 = v10;
    *(int*)0x2018 = v11;
    *(char*)0x2200 = v12 ? 1: 0;
    *(char*)0x2201 = v12 ? 0: 1;
    *(char*)0x2202 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2203 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x2204 = (unsigned char)v3 == 2 ? 1: 0;
    *(char*)0x2205 = (unsigned char)v3 == 2 ? 0: 1;
    *(char*)0x2206 = (unsigned char)v3 <= 2 ? 1: 0;
    *(char*)0x2207 = (unsigned char)v3 <= 2 ? 0: 1;
    *(char*)0x2208 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2209 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x220A = __parity__((unsigned char)v3 - 2) ? 1: 0;
    *(char*)0x220B = __parity__((unsigned char)v3 - 2) ? 0: 1;
    *(char*)0x220C = (unsigned char)v3 < 2 != v12 ? 1: 0;
    *(char*)0x220D = (unsigned char)v3 < 2 != v12 ? 0: 1;
    *(char*)0x220E = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v12 ? 1: 0;
    *(char*)0x220F = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v12 ? 0: 1;
    *(short*)0x2100 = (unsigned short)((unsigned char)v3 < 2) | ((unsigned short)1 << 1) | ((unsigned short)__parity__((unsigned char)v3 - 2) << 2) | ((unsigned short)0 << 3) | ((unsigned short)(((((unsigned char)v3 - 2) ^ ((unsigned char)v3 ^ 0x2)) >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)((unsigned char)v3 == 2) << 6) | ((unsigned short)((unsigned char)v3 < 2) << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v12 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_4_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)134 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_4_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)1666 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_4_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 2;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)70 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_4_mv_plain() {
    return 0;
}

int cmov_w_with_code_5_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    short v3 = (unsigned short)*(int*)0x1000;
    short v4 = (unsigned short)(*(int*)0x1000 >>> 16);
    short v5 = (unsigned short)*(int*)0x1004;
    short v6 = (unsigned short)(*(int*)0x1004 >>> 16);
    int v7 = *(int*)0x1008;
    int v8 = *(int*)0x100C;
    int v9 = *(int*)0x1010;
    int v10 = *(int*)0x1014;
    int v11 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v12 = ((((unsigned char)v3 - 2) ^ (unsigned char)v3) & ((unsigned char)v3 ^ 0x2)) < 0;
    *(int*)0x2000 = (unsigned int)v3 | ((unsigned int)v4 << 16);
    *(int*)0x2004 = (unsigned int)((unsigned char)v3 == 2 ? v5: v3) | ((unsigned int)v6 << 16);
    *(int*)0x2008 = v7;
    *(int*)0x200C = v8;
    *(int*)0x2010 = v9;
    *(int*)0x2014 = v10;
    *(int*)0x2018 = v11;
    *(char*)0x2200 = v12 ? 1: 0;
    *(char*)0x2201 = v12 ? 0: 1;
    *(char*)0x2202 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2203 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x2204 = (unsigned char)v3 == 2 ? 1: 0;
    *(char*)0x2205 = (unsigned char)v3 == 2 ? 0: 1;
    *(char*)0x2206 = (unsigned char)v3 <= 2 ? 1: 0;
    *(char*)0x2207 = (unsigned char)v3 <= 2 ? 0: 1;
    *(char*)0x2208 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2209 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x220A = __parity__((unsigned char)v3 - 2) ? 1: 0;
    *(char*)0x220B = __parity__((unsigned char)v3 - 2) ? 0: 1;
    *(char*)0x220C = (unsigned char)v3 < 2 != v12 ? 1: 0;
    *(char*)0x220D = (unsigned char)v3 < 2 != v12 ? 0: 1;
    *(char*)0x220E = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v12 ? 1: 0;
    *(char*)0x220F = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v12 ? 0: 1;
    *(short*)0x2100 = (unsigned short)((unsigned char)v3 < 2) | ((unsigned short)1 << 1) | ((unsigned short)__parity__((unsigned char)v3 - 2) << 2) | ((unsigned short)0 << 3) | ((unsigned short)(((((unsigned char)v3 - 2) ^ ((unsigned char)v3 ^ 0x2)) >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)((unsigned char)v3 == 2) << 6) | ((unsigned short)((unsigned char)v3 < 2) << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v12 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_5_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6677984;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)134 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_5_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 1231995112;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)1666 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_5_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)70 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_5_mv_plain() {
    return 0;
}

int cmov_w_with_code_6_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    short v3 = (unsigned short)*(int*)0x1000;
    short v4 = (unsigned short)(*(int*)0x1000 >>> 16);
    short v5 = (unsigned short)*(int*)0x1004;
    short v6 = (unsigned short)(*(int*)0x1004 >>> 16);
    int v7 = *(int*)0x1008;
    int v8 = *(int*)0x100C;
    int v9 = *(int*)0x1010;
    int v10 = *(int*)0x1014;
    int v11 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v12 = ((((unsigned char)v3 - 2) ^ (unsigned char)v3) & ((unsigned char)v3 ^ 0x2)) < 0;
    *(int*)0x2000 = (unsigned int)v3 | ((unsigned int)v4 << 16);
    *(int*)0x2004 = (unsigned int)((unsigned char)v3 <= 2 ? v3: v5) | ((unsigned int)v6 << 16);
    *(int*)0x2008 = v7;
    *(int*)0x200C = v8;
    *(int*)0x2010 = v9;
    *(int*)0x2014 = v10;
    *(int*)0x2018 = v11;
    *(char*)0x2200 = v12 ? 1: 0;
    *(char*)0x2201 = v12 ? 0: 1;
    *(char*)0x2202 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2203 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x2204 = (unsigned char)v3 == 2 ? 1: 0;
    *(char*)0x2205 = (unsigned char)v3 == 2 ? 0: 1;
    *(char*)0x2206 = (unsigned char)v3 <= 2 ? 1: 0;
    *(char*)0x2207 = (unsigned char)v3 <= 2 ? 0: 1;
    *(char*)0x2208 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2209 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x220A = __parity__((unsigned char)v3 - 2) ? 1: 0;
    *(char*)0x220B = __parity__((unsigned char)v3 - 2) ? 0: 1;
    *(char*)0x220C = (unsigned char)v3 < 2 != v12 ? 1: 0;
    *(char*)0x220D = (unsigned char)v3 < 2 != v12 ? 0: 1;
    *(char*)0x220E = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v12 ? 1: 0;
    *(char*)0x220F = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v12 ? 0: 1;
    *(short*)0x2100 = (unsigned short)((unsigned char)v3 < 2) | ((unsigned short)1 << 1) | ((unsigned short)__parity__((unsigned char)v3 - 2) << 2) | ((unsigned short)0 << 3) | ((unsigned short)(((((unsigned char)v3 - 2) ^ ((unsigned char)v3 ^ 0x2)) >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)((unsigned char)v3 == 2) << 6) | ((unsigned short)((unsigned char)v3 < 2) << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v12 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_6_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)134 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_6_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)1666 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_6_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 2;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)70 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_6_mv_plain() {
    return 0;
}

int cmov_w_with_code_7_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    short v3 = (unsigned short)*(int*)0x1000;
    short v4 = (unsigned short)(*(int*)0x1000 >>> 16);
    short v5 = (unsigned short)*(int*)0x1004;
    short v6 = (unsigned short)(*(int*)0x1004 >>> 16);
    int v7 = *(int*)0x1008;
    int v8 = *(int*)0x100C;
    int v9 = *(int*)0x1010;
    int v10 = *(int*)0x1014;
    int v11 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v12 = ((((unsigned char)v3 - 2) ^ (unsigned char)v3) & ((unsigned char)v3 ^ 0x2)) < 0;
    *(int*)0x2000 = (unsigned int)v3 | ((unsigned int)v4 << 16);
    *(int*)0x2004 = (unsigned int)((unsigned char)v3 <= 2 ? v5: v3) | ((unsigned int)v6 << 16);
    *(int*)0x2008 = v7;
    *(int*)0x200C = v8;
    *(int*)0x2010 = v9;
    *(int*)0x2014 = v10;
    *(int*)0x2018 = v11;
    *(char*)0x2200 = v12 ? 1: 0;
    *(char*)0x2201 = v12 ? 0: 1;
    *(char*)0x2202 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2203 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x2204 = (unsigned char)v3 == 2 ? 1: 0;
    *(char*)0x2205 = (unsigned char)v3 == 2 ? 0: 1;
    *(char*)0x2206 = (unsigned char)v3 <= 2 ? 1: 0;
    *(char*)0x2207 = (unsigned char)v3 <= 2 ? 0: 1;
    *(char*)0x2208 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2209 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x220A = __parity__((unsigned char)v3 - 2) ? 1: 0;
    *(char*)0x220B = __parity__((unsigned char)v3 - 2) ? 0: 1;
    *(char*)0x220C = (unsigned char)v3 < 2 != v12 ? 1: 0;
    *(char*)0x220D = (unsigned char)v3 < 2 != v12 ? 0: 1;
    *(char*)0x220E = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v12 ? 1: 0;
    *(char*)0x220F = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v12 ? 0: 1;
    *(short*)0x2100 = (unsigned short)((unsigned char)v3 < 2) | ((unsigned short)1 << 1) | ((unsigned short)__parity__((unsigned char)v3 - 2) << 2) | ((unsigned short)0 << 3) | ((unsigned short)(((((unsigned char)v3 - 2) ^ ((unsigned char)v3 ^ 0x2)) >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)((unsigned char)v3 == 2) << 6) | ((unsigned short)((unsigned char)v3 < 2) << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v12 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_7_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6677984;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)134 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_7_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 1231995112;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)1666 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_7_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)70 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_7_mv_plain() {
    return 0;
}

int cmov_w_with_code_8_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    short v3 = (unsigned short)*(int*)0x1000;
    short v4 = (unsigned short)(*(int*)0x1000 >>> 16);
    short v5 = (unsigned short)*(int*)0x1004;
    short v6 = (unsigned short)(*(int*)0x1004 >>> 16);
    int v7 = *(int*)0x1008;
    int v8 = *(int*)0x100C;
    int v9 = *(int*)0x1010;
    int v10 = *(int*)0x1014;
    int v11 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v12 = ((((unsigned char)v3 - 2) ^ (unsigned char)v3) & ((unsigned char)v3 ^ 0x2)) < 0;
    *(int*)0x2000 = (unsigned int)v3 | ((unsigned int)v4 << 16);
    *(int*)0x2004 = (unsigned int)((unsigned char)v3 < 2 ? v3: v5) | ((unsigned int)v6 << 16);
    *(int*)0x2008 = v7;
    *(int*)0x200C = v8;
    *(int*)0x2010 = v9;
    *(int*)0x2014 = v10;
    *(int*)0x2018 = v11;
    *(char*)0x2200 = v12 ? 1: 0;
    *(char*)0x2201 = v12 ? 0: 1;
    *(char*)0x2202 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2203 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x2204 = (unsigned char)v3 == 2 ? 1: 0;
    *(char*)0x2205 = (unsigned char)v3 == 2 ? 0: 1;
    *(char*)0x2206 = (unsigned char)v3 <= 2 ? 1: 0;
    *(char*)0x2207 = (unsigned char)v3 <= 2 ? 0: 1;
    *(char*)0x2208 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2209 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x220A = __parity__((unsigned char)v3 - 2) ? 1: 0;
    *(char*)0x220B = __parity__((unsigned char)v3 - 2) ? 0: 1;
    *(char*)0x220C = (unsigned char)v3 < 2 != v12 ? 1: 0;
    *(char*)0x220D = (unsigned char)v3 < 2 != v12 ? 0: 1;
    *(char*)0x220E = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v12 ? 1: 0;
    *(char*)0x220F = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v12 ? 0: 1;
    *(short*)0x2100 = (unsigned short)((unsigned char)v3 < 2) | ((unsigned short)1 << 1) | ((unsigned short)__parity__((unsigned char)v3 - 2) << 2) | ((unsigned short)0 << 3) | ((unsigned short)(((((unsigned char)v3 - 2) ^ ((unsigned char)v3 ^ 0x2)) >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)((unsigned char)v3 == 2) << 6) | ((unsigned short)((unsigned char)v3 < 2) << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v12 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_8_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6677984;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)134 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_8_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 1231995112;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)1666 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_8_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)70 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_8_mv_plain() {
    return 0;
}

int cmov_w_with_code_9_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    short v3 = (unsigned short)*(int*)0x1000;
    short v4 = (unsigned short)(*(int*)0x1000 >>> 16);
    short v5 = (unsigned short)*(int*)0x1004;
    short v6 = (unsigned short)(*(int*)0x1004 >>> 16);
    int v7 = *(int*)0x1008;
    int v8 = *(int*)0x100C;
    int v9 = *(int*)0x1010;
    int v10 = *(int*)0x1014;
    int v11 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v12 = ((((unsigned char)v3 - 2) ^ (unsigned char)v3) & ((unsigned char)v3 ^ 0x2)) < 0;
    *(int*)0x2000 = (unsigned int)v3 | ((unsigned int)v4 << 16);
    *(int*)0x2004 = (unsigned int)((unsigned char)v3 < 2 ? v5: v3) | ((unsigned int)v6 << 16);
    *(int*)0x2008 = v7;
    *(int*)0x200C = v8;
    *(int*)0x2010 = v9;
    *(int*)0x2014 = v10;
    *(int*)0x2018 = v11;
    *(char*)0x2200 = v12 ? 1: 0;
    *(char*)0x2201 = v12 ? 0: 1;
    *(char*)0x2202 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2203 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x2204 = (unsigned char)v3 == 2 ? 1: 0;
    *(char*)0x2205 = (unsigned char)v3 == 2 ? 0: 1;
    *(char*)0x2206 = (unsigned char)v3 <= 2 ? 1: 0;
    *(char*)0x2207 = (unsigned char)v3 <= 2 ? 0: 1;
    *(char*)0x2208 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2209 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x220A = __parity__((unsigned char)v3 - 2) ? 1: 0;
    *(char*)0x220B = __parity__((unsigned char)v3 - 2) ? 0: 1;
    *(char*)0x220C = (unsigned char)v3 < 2 != v12 ? 1: 0;
    *(char*)0x220D = (unsigned char)v3 < 2 != v12 ? 0: 1;
    *(char*)0x220E = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v12 ? 1: 0;
    *(char*)0x220F = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v12 ? 0: 1;
    *(short*)0x2100 = (unsigned short)((unsigned char)v3 < 2) | ((unsigned short)1 << 1) | ((unsigned short)__parity__((unsigned char)v3 - 2) << 2) | ((unsigned short)0 << 3) | ((unsigned short)(((((unsigned char)v3 - 2) ^ ((unsigned char)v3 ^ 0x2)) >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)((unsigned char)v3 == 2) << 6) | ((unsigned short)((unsigned char)v3 < 2) << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v12 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_9_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)134 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_9_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)1666 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_9_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 2;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)70 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_9_mv_plain() {
    return 0;
}

int cmov_w_with_code_a_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    short v3 = (unsigned short)*(int*)0x1000;
    short v4 = (unsigned short)(*(int*)0x1000 >>> 16);
    short v5 = (unsigned short)*(int*)0x1004;
    short v6 = (unsigned short)(*(int*)0x1004 >>> 16);
    int v7 = *(int*)0x1008;
    int v8 = *(int*)0x100C;
    int v9 = *(int*)0x1010;
    int v10 = *(int*)0x1014;
    int v11 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v12 = ((((unsigned char)v3 - 2) ^ (unsigned char)v3) & ((unsigned char)v3 ^ 0x2)) < 0;
    *(int*)0x2000 = (unsigned int)v3 | ((unsigned int)v4 << 16);
    *(int*)0x2004 = (unsigned int)(__parity__((unsigned char)v3 - 2) ? v3: v5) | ((unsigned int)v6 << 16);
    *(int*)0x2008 = v7;
    *(int*)0x200C = v8;
    *(int*)0x2010 = v9;
    *(int*)0x2014 = v10;
    *(int*)0x2018 = v11;
    *(char*)0x2200 = v12 ? 1: 0;
    *(char*)0x2201 = v12 ? 0: 1;
    *(char*)0x2202 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2203 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x2204 = (unsigned char)v3 == 2 ? 1: 0;
    *(char*)0x2205 = (unsigned char)v3 == 2 ? 0: 1;
    *(char*)0x2206 = (unsigned char)v3 <= 2 ? 1: 0;
    *(char*)0x2207 = (unsigned char)v3 <= 2 ? 0: 1;
    *(char*)0x2208 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2209 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x220A = __parity__((unsigned char)v3 - 2) ? 1: 0;
    *(char*)0x220B = __parity__((unsigned char)v3 - 2) ? 0: 1;
    *(char*)0x220C = (unsigned char)v3 < 2 != v12 ? 1: 0;
    *(char*)0x220D = (unsigned char)v3 < 2 != v12 ? 0: 1;
    *(char*)0x220E = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v12 ? 1: 0;
    *(char*)0x220F = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v12 ? 0: 1;
    *(short*)0x2100 = (unsigned short)((unsigned char)v3 < 2) | ((unsigned short)1 << 1) | ((unsigned short)__parity__((unsigned char)v3 - 2) << 2) | ((unsigned short)0 << 3) | ((unsigned short)(((((unsigned char)v3 - 2) ^ ((unsigned char)v3 ^ 0x2)) >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)((unsigned char)v3 == 2) << 6) | ((unsigned short)((unsigned char)v3 < 2) << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v12 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_a_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6677984;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)134 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_a_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)1666 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_a_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 2;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)70 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_a_mv_plain() {
    return 0;
}

int cmov_w_with_code_b_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    short v3 = (unsigned short)*(int*)0x1000;
    short v4 = (unsigned short)(*(int*)0x1000 >>> 16);
    short v5 = (unsigned short)*(int*)0x1004;
    short v6 = (unsigned short)(*(int*)0x1004 >>> 16);
    int v7 = *(int*)0x1008;
    int v8 = *(int*)0x100C;
    int v9 = *(int*)0x1010;
    int v10 = *(int*)0x1014;
    int v11 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v12 = ((((unsigned char)v3 - 2) ^ (unsigned char)v3) & ((unsigned char)v3 ^ 0x2)) < 0;
    *(int*)0x2000 = (unsigned int)v3 | ((unsigned int)v4 << 16);
    *(int*)0x2004 = (unsigned int)(__parity__((unsigned char)v3 - 2) ? v5: v3) | ((unsigned int)v6 << 16);
    *(int*)0x2008 = v7;
    *(int*)0x200C = v8;
    *(int*)0x2010 = v9;
    *(int*)0x2014 = v10;
    *(int*)0x2018 = v11;
    *(char*)0x2200 = v12 ? 1: 0;
    *(char*)0x2201 = v12 ? 0: 1;
    *(char*)0x2202 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2203 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x2204 = (unsigned char)v3 == 2 ? 1: 0;
    *(char*)0x2205 = (unsigned char)v3 == 2 ? 0: 1;
    *(char*)0x2206 = (unsigned char)v3 <= 2 ? 1: 0;
    *(char*)0x2207 = (unsigned char)v3 <= 2 ? 0: 1;
    *(char*)0x2208 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2209 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x220A = __parity__((unsigned char)v3 - 2) ? 1: 0;
    *(char*)0x220B = __parity__((unsigned char)v3 - 2) ? 0: 1;
    *(char*)0x220C = (unsigned char)v3 < 2 != v12 ? 1: 0;
    *(char*)0x220D = (unsigned char)v3 < 2 != v12 ? 0: 1;
    *(char*)0x220E = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v12 ? 1: 0;
    *(char*)0x220F = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v12 ? 0: 1;
    *(short*)0x2100 = (unsigned short)((unsigned char)v3 < 2) | ((unsigned short)1 << 1) | ((unsigned short)__parity__((unsigned char)v3 - 2) << 2) | ((unsigned short)0 << 3) | ((unsigned short)(((((unsigned char)v3 - 2) ^ ((unsigned char)v3 ^ 0x2)) >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)((unsigned char)v3 == 2) << 6) | ((unsigned short)((unsigned char)v3 < 2) << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v12 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_b_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)134 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_b_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 1231995112;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)1666 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_b_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)70 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_b_mv_plain() {
    return 0;
}

int cmov_w_with_code_c_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    short v3 = (unsigned short)*(int*)0x1000;
    short v4 = (unsigned short)(*(int*)0x1000 >>> 16);
    short v5 = (unsigned short)*(int*)0x1004;
    short v6 = (unsigned short)(*(int*)0x1004 >>> 16);
    int v7 = *(int*)0x1008;
    int v8 = *(int*)0x100C;
    int v9 = *(int*)0x1010;
    int v10 = *(int*)0x1014;
    int v11 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v12 = ((((unsigned char)v3 - 2) ^ (unsigned char)v3) & ((unsigned char)v3 ^ 0x2)) < 0;
    *(int*)0x2000 = (unsigned int)v3 | ((unsigned int)v4 << 16);
    *(int*)0x2004 = (unsigned int)((unsigned char)v3 < 2 != v12 ? v3: v5) | ((unsigned int)v6 << 16);
    *(int*)0x2008 = v7;
    *(int*)0x200C = v8;
    *(int*)0x2010 = v9;
    *(int*)0x2014 = v10;
    *(int*)0x2018 = v11;
    *(char*)0x2200 = v12 ? 1: 0;
    *(char*)0x2201 = v12 ? 0: 1;
    *(char*)0x2202 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2203 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x2204 = (unsigned char)v3 == 2 ? 1: 0;
    *(char*)0x2205 = (unsigned char)v3 == 2 ? 0: 1;
    *(char*)0x2206 = (unsigned char)v3 <= 2 ? 1: 0;
    *(char*)0x2207 = (unsigned char)v3 <= 2 ? 0: 1;
    *(char*)0x2208 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2209 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x220A = __parity__((unsigned char)v3 - 2) ? 1: 0;
    *(char*)0x220B = __parity__((unsigned char)v3 - 2) ? 0: 1;
    *(char*)0x220C = (unsigned char)v3 < 2 != v12 ? 1: 0;
    *(char*)0x220D = (unsigned char)v3 < 2 != v12 ? 0: 1;
    *(char*)0x220E = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v12 ? 1: 0;
    *(char*)0x220F = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v12 ? 0: 1;
    *(short*)0x2100 = (unsigned short)((unsigned char)v3 < 2) | ((unsigned short)1 << 1) | ((unsigned short)__parity__((unsigned char)v3 - 2) << 2) | ((unsigned short)0 << 3) | ((unsigned short)(((((unsigned char)v3 - 2) ^ ((unsigned char)v3 ^ 0x2)) >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)((unsigned char)v3 == 2) << 6) | ((unsigned short)((unsigned char)v3 < 2) << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v12 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_c_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6677984;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)134 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_c_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 1231995112;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)1666 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_c_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)70 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_c_mv_plain() {
    return 0;
}

int cmov_w_with_code_d_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    short v3 = (unsigned short)*(int*)0x1000;
    short v4 = (unsigned short)(*(int*)0x1000 >>> 16);
    short v5 = (unsigned short)*(int*)0x1004;
    short v6 = (unsigned short)(*(int*)0x1004 >>> 16);
    int v7 = *(int*)0x1008;
    int v8 = *(int*)0x100C;
    int v9 = *(int*)0x1010;
    int v10 = *(int*)0x1014;
    int v11 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v12 = ((((unsigned char)v3 - 2) ^ (unsigned char)v3) & ((unsigned char)v3 ^ 0x2)) < 0;
    *(int*)0x2000 = (unsigned int)v3 | ((unsigned int)v4 << 16);
    *(int*)0x2004 = (unsigned int)((unsigned char)v3 < 2 != v12 ? v5: v3) | ((unsigned int)v6 << 16);
    *(int*)0x2008 = v7;
    *(int*)0x200C = v8;
    *(int*)0x2010 = v9;
    *(int*)0x2014 = v10;
    *(int*)0x2018 = v11;
    *(char*)0x2200 = v12 ? 1: 0;
    *(char*)0x2201 = v12 ? 0: 1;
    *(char*)0x2202 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2203 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x2204 = (unsigned char)v3 == 2 ? 1: 0;
    *(char*)0x2205 = (unsigned char)v3 == 2 ? 0: 1;
    *(char*)0x2206 = (unsigned char)v3 <= 2 ? 1: 0;
    *(char*)0x2207 = (unsigned char)v3 <= 2 ? 0: 1;
    *(char*)0x2208 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2209 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x220A = __parity__((unsigned char)v3 - 2) ? 1: 0;
    *(char*)0x220B = __parity__((unsigned char)v3 - 2) ? 0: 1;
    *(char*)0x220C = (unsigned char)v3 < 2 != v12 ? 1: 0;
    *(char*)0x220D = (unsigned char)v3 < 2 != v12 ? 0: 1;
    *(char*)0x220E = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v12 ? 1: 0;
    *(char*)0x220F = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v12 ? 0: 1;
    *(short*)0x2100 = (unsigned short)((unsigned char)v3 < 2) | ((unsigned short)1 << 1) | ((unsigned short)__parity__((unsigned char)v3 - 2) << 2) | ((unsigned short)0 << 3) | ((unsigned short)(((((unsigned char)v3 - 2) ^ ((unsigned char)v3 ^ 0x2)) >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)((unsigned char)v3 == 2) << 6) | ((unsigned short)((unsigned char)v3 < 2) << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v12 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_d_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)134 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_d_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)1666 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_d_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 2;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)70 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_d_mv_plain() {
    return 0;
}

int cmov_w_with_code_e_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    short v3 = (unsigned short)*(int*)0x1000;
    short v4 = (unsigned short)(*(int*)0x1000 >>> 16);
    short v5 = (unsigned short)*(int*)0x1004;
    short v6 = (unsigned short)(*(int*)0x1004 >>> 16);
    int v7 = *(int*)0x1008;
    int v8 = *(int*)0x100C;
    int v9 = *(int*)0x1010;
    int v10 = *(int*)0x1014;
    int v11 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v12 = ((((unsigned char)v3 - 2) ^ (unsigned char)v3) & ((unsigned char)v3 ^ 0x2)) < 0;
    *(int*)0x2000 = (unsigned int)v3 | ((unsigned int)v4 << 16);
    *(int*)0x2004 = (unsigned int)((unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v12 ? v3: v5) | ((unsigned int)v6 << 16);
    *(int*)0x2008 = v7;
    *(int*)0x200C = v8;
    *(int*)0x2010 = v9;
    *(int*)0x2014 = v10;
    *(int*)0x2018 = v11;
    *(char*)0x2200 = v12 ? 1: 0;
    *(char*)0x2201 = v12 ? 0: 1;
    *(char*)0x2202 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2203 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x2204 = (unsigned char)v3 == 2 ? 1: 0;
    *(char*)0x2205 = (unsigned char)v3 == 2 ? 0: 1;
    *(char*)0x2206 = (unsigned char)v3 <= 2 ? 1: 0;
    *(char*)0x2207 = (unsigned char)v3 <= 2 ? 0: 1;
    *(char*)0x2208 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2209 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x220A = __parity__((unsigned char)v3 - 2) ? 1: 0;
    *(char*)0x220B = __parity__((unsigned char)v3 - 2) ? 0: 1;
    *(char*)0x220C = (unsigned char)v3 < 2 != v12 ? 1: 0;
    *(char*)0x220D = (unsigned char)v3 < 2 != v12 ? 0: 1;
    *(char*)0x220E = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v12 ? 1: 0;
    *(char*)0x220F = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v12 ? 0: 1;
    *(short*)0x2100 = (unsigned short)((unsigned char)v3 < 2) | ((unsigned short)1 << 1) | ((unsigned short)__parity__((unsigned char)v3 - 2) << 2) | ((unsigned short)0 << 3) | ((unsigned short)(((((unsigned char)v3 - 2) ^ ((unsigned char)v3 ^ 0x2)) >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)((unsigned char)v3 == 2) << 6) | ((unsigned short)((unsigned char)v3 < 2) << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v12 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_e_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6677984;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)134 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_e_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 1231995112;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)1666 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_e_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 2;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)70 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_e_mv_plain() {
    return 0;
}

int cmov_w_with_code_f_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    short v3 = (unsigned short)*(int*)0x1000;
    short v4 = (unsigned short)(*(int*)0x1000 >>> 16);
    short v5 = (unsigned short)*(int*)0x1004;
    short v6 = (unsigned short)(*(int*)0x1004 >>> 16);
    int v7 = *(int*)0x1008;
    int v8 = *(int*)0x100C;
    int v9 = *(int*)0x1010;
    int v10 = *(int*)0x1014;
    int v11 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v12 = ((((unsigned char)v3 - 2) ^ (unsigned char)v3) & ((unsigned char)v3 ^ 0x2)) < 0;
    *(int*)0x2000 = (unsigned int)v3 | ((unsigned int)v4 << 16);
    *(int*)0x2004 = (unsigned int)((unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v12 ? v5: v3) | ((unsigned int)v6 << 16);
    *(int*)0x2008 = v7;
    *(int*)0x200C = v8;
    *(int*)0x2010 = v9;
    *(int*)0x2014 = v10;
    *(int*)0x2018 = v11;
    *(char*)0x2200 = v12 ? 1: 0;
    *(char*)0x2201 = v12 ? 0: 1;
    *(char*)0x2202 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2203 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x2204 = (unsigned char)v3 == 2 ? 1: 0;
    *(char*)0x2205 = (unsigned char)v3 == 2 ? 0: 1;
    *(char*)0x2206 = (unsigned char)v3 <= 2 ? 1: 0;
    *(char*)0x2207 = (unsigned char)v3 <= 2 ? 0: 1;
    *(char*)0x2208 = (unsigned char)v3 < 2 ? 1: 0;
    *(char*)0x2209 = (unsigned char)v3 < 2 ? 0: 1;
    *(char*)0x220A = __parity__((unsigned char)v3 - 2) ? 1: 0;
    *(char*)0x220B = __parity__((unsigned char)v3 - 2) ? 0: 1;
    *(char*)0x220C = (unsigned char)v3 < 2 != v12 ? 1: 0;
    *(char*)0x220D = (unsigned char)v3 < 2 != v12 ? 0: 1;
    *(char*)0x220E = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v12 ? 1: 0;
    *(char*)0x220F = (unsigned char)v3 == 2 || (unsigned char)v3 < 2 != v12 ? 0: 1;
    *(short*)0x2100 = (unsigned short)((unsigned char)v3 < 2) | ((unsigned short)1 << 1) | ((unsigned short)__parity__((unsigned char)v3 - 2) << 2) | ((unsigned short)0 << 3) | ((unsigned short)(((((unsigned char)v3 - 2) ^ ((unsigned char)v3 ^ 0x2)) >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)((unsigned char)v3 == 2) << 6) | ((unsigned short)((unsigned char)v3 < 2) << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v12 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_f_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)134 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_f_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)1666 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_f_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)70 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmov_w_with_code_f_mv_plain() {
    return 0;
}

int cmpxchg1_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    unsigned char v3 = (unsigned char)*(int*)0x1000;
    int v4 = (unsigned int)((*(int*)0x1000 >>> 8) & 0xffffff);
    unsigned char v5 = (unsigned char)*(int*)0x1004;
    int v6 = (unsigned int)((*(int*)0x1004 >>> 8) & 0xffffff);
    int v7 = *(int*)0x1008;
    int v8 = *(int*)0x100C;
    int v9 = *(int*)0x1010;
    int v10 = *(int*)0x1014;
    int v11 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v12 = v3 == v5;
    char v13 = (char)v3 < (char)v5;
    char v14 = __parity__(v3 - v5);
    char v15 = v3 < v5;
    char v16 = (char)(((v3 - v5) ^ v3) & (v3 ^ v5)) < 0;
    char v17 = (((v3 - v5) ^ (v3 ^ v5)) >>> 4) & 0x1;
    if(v12 != 0) {
        v5 = v3;
    }
    else {
        v3 = v5;
    }
    *(int*)0x2000 = (unsigned int)v3 | ((unsigned int)v4 << 8);
    *(int*)0x2004 = (unsigned int)v5 | ((unsigned int)v6 << 8);
    *(int*)0x2008 = v7;
    *(int*)0x200C = v8;
    *(int*)0x2010 = v9;
    *(int*)0x2014 = v10;
    *(int*)0x2018 = v11;
    *(char*)0x2200 = v16 ? 1: 0;
    *(char*)0x2201 = v16 ? 0: 1;
    *(char*)0x2202 = v15 ? 1: 0;
    *(char*)0x2203 = v15 ? 0: 1;
    *(char*)0x2204 = v12 ? 1: 0;
    *(char*)0x2205 = v12 ? 0: 1;
    *(char*)0x2206 = v15 || v12 ? 1: 0;
    *(char*)0x2207 = v15 || v12 ? 0: 1;
    *(char*)0x2208 = v13 ? 1: 0;
    *(char*)0x2209 = v13 ? 0: 1;
    *(char*)0x220A = v14 ? 1: 0;
    *(char*)0x220B = v14 ? 0: 1;
    *(char*)0x220C = v13 != v16 ? 1: 0;
    *(char*)0x220D = v13 != v16 ? 0: 1;
    *(char*)0x220E = v12 || v13 != v16 ? 1: 0;
    *(char*)0x220F = v12 || v13 != v16 ? 0: 1;
    *(short*)0x2100 = (unsigned short)v15 | ((unsigned short)1 << 1) | ((unsigned short)v14 << 2) | ((unsigned short)0 << 3) | ((unsigned short)v17 << 4) | ((unsigned short)0 << 5) | ((unsigned short)v12 << 6) | ((unsigned short)v13 << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v16 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmpxchg1_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650025;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 1;
    *(char*)0x2203 = 0;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)147 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmpxchg1_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 0x313ec0c3;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)1538 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmpxchg1_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 3;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 1;
    *(char*)0x2203 = 0;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)151 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmpxchg1_mv_plain() {
    return 0;
}

int cmpxchg2_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    unsigned short v3 = (unsigned short)*(int*)0x1000;
    short v4 = (unsigned short)(*(int*)0x1000 >>> 16);
    unsigned short v5 = (unsigned short)*(int*)0x1004;
    short v6 = (unsigned short)(*(int*)0x1004 >>> 16);
    int v7 = *(int*)0x1008;
    int v8 = *(int*)0x100C;
    int v9 = *(int*)0x1010;
    int v10 = *(int*)0x1014;
    int v11 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v12 = v3 == v5;
    char v13 = (short)v3 < (short)v5;
    char v14 = __parity__((unsigned char)v3 - (unsigned char)v5);
    char v15 = v3 < v5;
    char v16 = (short)(((v3 - v5) ^ v3) & (v3 ^ v5)) < 0;
    char v17 = (((v3 - v5) ^ (v3 ^ v5)) >>> 4) & 0x1;
    if(v12 != 0) {
        v5 = v3;
    }
    else {
        v3 = v5;
    }
    *(int*)0x2000 = (unsigned int)v3 | ((unsigned int)v4 << 16);
    *(int*)0x2004 = (unsigned int)v5 | ((unsigned int)v6 << 16);
    *(int*)0x2008 = v7;
    *(int*)0x200C = v8;
    *(int*)0x2010 = v9;
    *(int*)0x2014 = v10;
    *(int*)0x2018 = v11;
    *(char*)0x2200 = v16 ? 1: 0;
    *(char*)0x2201 = v16 ? 0: 1;
    *(char*)0x2202 = v15 ? 1: 0;
    *(char*)0x2203 = v15 ? 0: 1;
    *(char*)0x2204 = v12 ? 1: 0;
    *(char*)0x2205 = v12 ? 0: 1;
    *(char*)0x2206 = v15 || v12 ? 1: 0;
    *(char*)0x2207 = v15 || v12 ? 0: 1;
    *(char*)0x2208 = v13 ? 1: 0;
    *(char*)0x2209 = v13 ? 0: 1;
    *(char*)0x220A = v14 ? 1: 0;
    *(char*)0x220B = v14 ? 0: 1;
    *(char*)0x220C = v13 != v16 ? 1: 0;
    *(char*)0x220D = v13 != v16 ? 0: 1;
    *(char*)0x220E = v12 || v13 != v16 ? 1: 0;
    *(char*)0x220F = v12 || v13 != v16 ? 0: 1;
    *(short*)0x2100 = (unsigned short)v15 | ((unsigned short)1 << 1) | ((unsigned short)v14 << 2) | ((unsigned short)0 << 3) | ((unsigned short)v17 << 4) | ((unsigned short)0 << 5) | ((unsigned short)v12 << 6) | ((unsigned short)v13 << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v16 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmpxchg2_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548674345;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)18 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmpxchg2_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 0x313e81c3;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)1538 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmpxchg2_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 3;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 1;
    *(char*)0x2203 = 0;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)151 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmpxchg2_mv_plain() {
    return 0;
}

int cmpxchg3_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    unsigned int v3 = *(unsigned int*)0x1000;
    unsigned int v4 = *(unsigned int*)0x1004;
    unsigned int v5 = *(unsigned int*)0x1008;
    int v6 = *(int*)0x100C;
    int v7 = *(int*)0x1010;
    int v8 = *(int*)0x1014;
    int v9 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v10 = v3 == v5;
    char v11 = (int)v3 < (int)v5;
    char v12 = __parity__((unsigned char)v3 - (unsigned char)v5);
    char v13 = v3 < v5;
    char v14 = (int)(((v3 - v5) ^ v3) & (v3 ^ v5)) < 0;
    char v15 = (((v3 - v5) ^ (v3 ^ v5)) >>> 4) & 0x1;
    if(v10 != 0) {
        v5 = v4;
    }
    else {
        v3 = v5;
    }
    *(unsigned int*)0x2000 = v3;
    *(unsigned int*)0x2004 = v4;
    *(unsigned int*)0x2008 = v5;
    *(int*)0x200C = v6;
    *(int*)0x2010 = v7;
    *(int*)0x2014 = v8;
    *(int*)0x2018 = v9;
    *(char*)0x2200 = v14 ? 1: 0;
    *(char*)0x2201 = v14 ? 0: 1;
    *(char*)0x2202 = v13 ? 1: 0;
    *(char*)0x2203 = v13 ? 0: 1;
    *(char*)0x2204 = v10 ? 1: 0;
    *(char*)0x2205 = v10 ? 0: 1;
    *(char*)0x2206 = v13 || v10 ? 1: 0;
    *(char*)0x2207 = v13 || v10 ? 0: 1;
    *(char*)0x2208 = v11 ? 1: 0;
    *(char*)0x2209 = v11 ? 0: 1;
    *(char*)0x220A = v12 ? 1: 0;
    *(char*)0x220B = v12 ? 0: 1;
    *(char*)0x220C = v11 != v14 ? 1: 0;
    *(char*)0x220D = v11 != v14 ? 0: 1;
    *(char*)0x220E = v10 || v11 != v14 ? 1: 0;
    *(char*)0x220F = v10 || v11 != v14 ? 0: 1;
    *(short*)0x2100 = (unsigned short)v13 | ((unsigned short)1 << 1) | ((unsigned short)v12 << 2) | ((unsigned short)0 << 3) | ((unsigned short)v15 << 4) | ((unsigned short)0 << 5) | ((unsigned short)v10 << 6) | ((unsigned short)v11 << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v14 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmpxchg3_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 1181241928;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 1;
    *(char*)0x2201 = 0;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)2070 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmpxchg3_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 507473074;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)0x606 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmpxchg3_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 4;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 1;
    *(char*)0x2203 = 0;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)147 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmpxchg3_plain(int param0) {
    return 0;
}

int cmpxchg4_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    char v3 = (v2 >>> 8) & 0x1;
    char v4 = (v2 >>> 9) & 0x1;
    char v5 = (v2 >>> 10) & 0x1;
    char v6 = (v2 >>> 14) & 0x1;
    unsigned int v7 = *(unsigned int*)0x1000;
    unsigned int* ptr0 = *(unsigned int*)0x1004;
    int v8 = *(int*)0x1008;
    int v9 = *(int*)0x100C;
    int v10 = *(int*)0x1010;
    int v11 = *(int*)0x1014;
    int v12 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v13 = *ptr0 == v7;
    char v14 = *ptr0 > (int)v7;
    char v15 = __parity__((unsigned char)v7 - (unsigned char)*ptr0);
    char v16 = *ptr0 > v7;
    char v17 = (((v7 - *ptr0) ^ v7) & (*ptr0 ^ v7)) < 0;
    char v18 = (((v7 - *ptr0) ^ (*ptr0 ^ v7)) >>> 4) & 0x1;
    if(v13 != 0) {
        *ptr0 = v7;
    }
    else {
        v7 = *ptr0;
    }
    *(unsigned int*)0x2000 = v7;
    *(unsigned int*)0x2004 = ptr0;
    *(int*)0x2008 = v8;
    *(int*)0x200C = v9;
    *(int*)0x2010 = v10;
    *(int*)0x2014 = v11;
    *(int*)0x2018 = v12;
    *(char*)0x2200 = v17 ? 1: 0;
    *(char*)0x2201 = v17 ? 0: 1;
    *(char*)0x2202 = v16 ? 1: 0;
    *(char*)0x2203 = v16 ? 0: 1;
    *(char*)0x2204 = v13 ? 1: 0;
    *(char*)0x2205 = v13 ? 0: 1;
    *(char*)0x2206 = v16 || v13 ? 1: 0;
    *(char*)0x2207 = v16 || v13 ? 0: 1;
    *(char*)0x2208 = v14 ? 1: 0;
    *(char*)0x2209 = v14 ? 0: 1;
    *(char*)0x220A = v15 ? 1: 0;
    *(char*)0x220B = v15 ? 0: 1;
    *(char*)0x220C = v14 != v17 ? 1: 0;
    *(char*)0x220D = v14 != v17 ? 0: 1;
    *(char*)0x220E = v13 || v14 != v17 ? 1: 0;
    *(char*)0x220F = v13 || v14 != v17 ? 0: 1;
    *(short*)0x2100 = (unsigned short)v16 | ((unsigned short)1 << 1) | ((unsigned short)v15 << 2) | ((unsigned short)0 << 3) | ((unsigned short)v18 << 4) | ((unsigned short)0 << 5) | ((unsigned short)v13 << 6) | ((unsigned short)v14 << 7) | ((unsigned short)v3 << 8) | ((unsigned short)v4 << 9) | ((unsigned short)v5 << 10) | ((unsigned short)v17 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)v6 << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmpxchg4_mv_constant_complex1() {
    int v0;
    char v1;
    int v2 = -1548650108;
    *(unsigned int*)0x2050 = &v0;
    char v3 = *(int*)0x6671AD7 == -1548650108;
    char v4 = *(int*)0x6671AD7 > -1548650108;
    char v5 = __parity__(132 - (unsigned char)*(int*)0x6671AD7);
    char v6 = *(unsigned int*)0x6671AD7 > 2746317188;
    char v7 = (((-1548650108 - *(int*)0x6671AD7) ^ 0xa3b17984) & (*(int*)0x6671AD7 ^ 0xa3b17984)) < 0;
    char v8 = (((-1548650108 - *(int*)0x6671AD7) ^ (*(int*)0x6671AD7 ^ 0xa3b17984)) >>> 4) & 0x1;
    if(v3 != 0) {
        *(int*)0x6671AD7 = -1548650108;
    }
    else {
        v2 = *(int*)0x6671AD7;
    }
    *(int*)0x2000 = v2;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = v7 ? 1: 0;
    *(char*)0x2201 = v7 ? 0: 1;
    *(char*)0x2202 = v6 ? 1: 0;
    *(char*)0x2203 = v6 ? 0: 1;
    *(char*)0x2204 = v3 ? 1: 0;
    *(char*)0x2205 = v3 ? 0: 1;
    *(char*)0x2206 = v6 || v3 ? 1: 0;
    *(char*)0x2207 = v6 || v3 ? 0: 1;
    *(char*)0x2208 = v4 ? 1: 0;
    *(char*)0x2209 = v4 ? 0: 1;
    *(char*)0x220A = v5 ? 1: 0;
    *(char*)0x220B = v5 ? 0: 1;
    *(char*)0x220C = v4 != v7 ? 1: 0;
    *(char*)0x220D = v4 != v7 ? 0: 1;
    *(char*)0x220E = v3 || v4 != v7 ? 1: 0;
    *(char*)0x220F = v3 || v4 != v7 ? 0: 1;
    *(short*)0x2100 = (unsigned short)v6 | ((unsigned short)1 << 1) | ((unsigned short)v5 << 2) | ((unsigned short)0 << 3) | ((unsigned short)v8 << 4) | ((unsigned short)0 << 5) | ((unsigned short)v3 << 6) | ((unsigned short)v4 << 7) | ((unsigned short)0 << 8) | ((unsigned short)v7 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmpxchg4_mv_constant_complex2() {
    int v0;
    char v1;
    int v2 = 826196200;
    *(unsigned int*)0x2050 = &v0;
    char v3 = *(int*)0x496E81C3 == 826196200;
    char v4 = *(int*)0x496E81C3 > 826196200;
    char v5 = __parity__(232 - (unsigned char)*(int*)0x496E81C3);
    char v6 = *(unsigned int*)0x496E81C3 > 826196200;
    char v7 = (((826196200 - *(int*)0x496E81C3) ^ 0x313ec0e8) & (*(int*)0x496E81C3 ^ 0x313ec0e8)) < 0;
    char v8 = (((826196200 - *(int*)0x496E81C3) ^ (*(int*)0x496E81C3 ^ 0x313ec0e8)) >>> 4) & 0x1;
    if(v3 != 0) {
        *(int*)0x496E81C3 = 826196200;
    }
    else {
        v2 = *(int*)0x496E81C3;
    }
    *(int*)0x2000 = v2;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = v7 ? 1: 0;
    *(char*)0x2201 = v7 ? 0: 1;
    *(char*)0x2202 = v6 ? 1: 0;
    *(char*)0x2203 = v6 ? 0: 1;
    *(char*)0x2204 = v3 ? 1: 0;
    *(char*)0x2205 = v3 ? 0: 1;
    *(char*)0x2206 = v6 || v3 ? 1: 0;
    *(char*)0x2207 = v6 || v3 ? 0: 1;
    *(char*)0x2208 = v4 ? 1: 0;
    *(char*)0x2209 = v4 ? 0: 1;
    *(char*)0x220A = v5 ? 1: 0;
    *(char*)0x220B = v5 ? 0: 1;
    *(char*)0x220C = v4 != v7 ? 1: 0;
    *(char*)0x220D = v4 != v7 ? 0: 1;
    *(char*)0x220E = v3 || v4 != v7 ? 1: 0;
    *(char*)0x220F = v3 || v4 != v7 ? 0: 1;
    *(short*)0x2100 = (unsigned short)v6 | ((unsigned short)1 << 1) | ((unsigned short)v5 << 2) | ((unsigned short)0 << 3) | ((unsigned short)v8 << 4) | ((unsigned short)0 << 5) | ((unsigned short)v3 << 6) | ((unsigned short)v4 << 7) | ((unsigned short)6 << 8) | ((unsigned short)v7 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmpxchg4_mv_constant_simple() {
    int v0;
    char v1;
    int v2 = 2;
    *(unsigned int*)0x2050 = &v0;
    char v3 = *(int*)0x3 == 2;
    char v4 = *(int*)0x3 > 2;
    char v5 = __parity__(2 - (unsigned char)*(int*)0x3);
    char v6 = *(unsigned int*)0x3 > 2;
    char v7 = (((2 - *(int*)0x3) ^ 0x2) & (*(int*)0x3 ^ 0x2)) < 0;
    char v8 = (((2 - *(int*)0x3) ^ (*(int*)0x3 ^ 0x2)) >>> 4) & 0x1;
    if(v3 != 0) {
        *(int*)0x3 = 2;
    }
    else {
        v2 = *(int*)0x3;
    }
    *(int*)0x2000 = v2;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = v7 ? 1: 0;
    *(char*)0x2201 = v7 ? 0: 1;
    *(char*)0x2202 = v6 ? 1: 0;
    *(char*)0x2203 = v6 ? 0: 1;
    *(char*)0x2204 = v3 ? 1: 0;
    *(char*)0x2205 = v3 ? 0: 1;
    *(char*)0x2206 = v6 || v3 ? 1: 0;
    *(char*)0x2207 = v6 || v3 ? 0: 1;
    *(char*)0x2208 = v4 ? 1: 0;
    *(char*)0x2209 = v4 ? 0: 1;
    *(char*)0x220A = v5 ? 1: 0;
    *(char*)0x220B = v5 ? 0: 1;
    *(char*)0x220C = v4 != v7 ? 1: 0;
    *(char*)0x220D = v4 != v7 ? 0: 1;
    *(char*)0x220E = v3 || v4 != v7 ? 1: 0;
    *(char*)0x220F = v3 || v4 != v7 ? 0: 1;
    *(short*)0x2100 = (unsigned short)v6 | ((unsigned short)1 << 1) | ((unsigned short)v5 << 2) | ((unsigned short)0 << 3) | ((unsigned short)v8 << 4) | ((unsigned short)0 << 5) | ((unsigned short)v3 << 6) | ((unsigned short)v4 << 7) | ((unsigned short)0 << 8) | ((unsigned short)v7 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmpxchg4_mv_plain() {
    int* ptr0;
    int v0;
    if(*ptr0 == v0) {
        *ptr0 = v0;
    }
    return 0;
}

int cmpxchg5_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    short v3 = (unsigned short)*(int*)0x1000;
    short v4 = (unsigned short)(*(int*)0x1000 >>> 16);
    int v5 = *(int*)0x1004;
    int v6 = *(int*)0x1008;
    int v7 = *(int*)0x100C;
    int v8 = *(int*)0x1010;
    int v9 = *(int*)0x1014;
    int v10 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = (unsigned int)v3 | ((unsigned int)v4 << 16);
    *(int*)0x2004 = v5;
    *(int*)0x2008 = v6;
    *(int*)0x200C = v7;
    *(int*)0x2010 = v8;
    *(int*)0x2014 = v9;
    *(int*)0x2018 = v10;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = (unsigned char)v3 < (unsigned char)v3 ? 1: 0;
    *(char*)0x2203 = (unsigned char)v3 < (unsigned char)v3 ? 0: 1;
    *(char*)0x2204 = (unsigned char)v3 == (unsigned char)v3 ? 1: 0;
    *(char*)0x2205 = (unsigned char)v3 == (unsigned char)v3 ? 0: 1;
    *(char*)0x2206 = (unsigned char)v3 <= (unsigned char)v3 ? 1: 0;
    *(char*)0x2207 = (unsigned char)v3 <= (unsigned char)v3 ? 0: 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = (unsigned char)v3 == (unsigned char)v3 ? 1: 0;
    *(char*)0x220F = (unsigned char)v3 == (unsigned char)v3 ? 0: 1;
    *(short*)0x2100 = (unsigned short)((unsigned char)v3 < (unsigned char)v3) | ((unsigned short)3 << 1) | ((unsigned short)((unsigned char)v3 == (unsigned char)v3) << 6) | ((unsigned short)0 << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)0 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmpxchg5_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)70 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmpxchg5_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)0x646 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmpxchg5_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)70 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmpxchg5_mv_plain() {
    return 0;
}

int cmpxchg8b_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    short v3 = *(short*)0x1100;
    long long* ptr0 = *(unsigned int*)0x1000;
    int v4 = *(int*)0x1004;
    int v5 = *(int*)0x1008;
    int v6 = *(int*)0x100C;
    int v7 = *(int*)0x1010;
    int v8 = *(int*)0x1014;
    int v9 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    *ptr0 = cmpxchg8b(*ptr0);
    *(unsigned int*)0x2000 = ptr0;
    *(int*)0x2004 = v4;
    *(int*)0x2008 = v5;
    *(int*)0x200C = v6;
    *(int*)0x2010 = v7;
    *(int*)0x2014 = v8;
    *(int*)0x2018 = v9;
    *(char*)0x2200 = (v3 >>> 11) & 0x1 ? 1: 0;
    *(char*)0x2201 = (v3 >>> 11) & 0x1 ? 0: 1;
    *(char*)0x2202 = v3 & 0x1 ? 1: 0;
    *(char*)0x2203 = v3 & 0x1 ? 0: 1;
    *(char*)0x2204 = (v3 >>> 6) & 0x1 ? 1: 0;
    *(char*)0x2205 = (v3 >>> 6) & 0x1 ? 0: 1;
    *(char*)0x2206 = (v3 & 0x1) || ((v3 >>> 6) & 0x1) ? 1: 0;
    *(char*)0x2207 = (v3 & 0x1) || ((v3 >>> 6) & 0x1) ? 0: 1;
    *(char*)0x2208 = (v3 >>> 7) & 0x1 ? 1: 0;
    *(char*)0x2209 = (v3 >>> 7) & 0x1 ? 0: 1;
    *(char*)0x220A = (v3 >>> 2) & 0x1 ? 1: 0;
    *(char*)0x220B = (v3 >>> 2) & 0x1 ? 0: 1;
    *(char*)0x220C = ((v3 >>> 7) & 0x1) != ((v3 >>> 11) & 0x1) ? 1: 0;
    *(char*)0x220D = ((v3 >>> 7) & 0x1) != ((v3 >>> 11) & 0x1) ? 0: 1;
    *(char*)0x220E = ((v3 >>> 6) & 0x1) || ((v3 >>> 7) & 0x1) != ((v3 >>> 11) & 0x1) ? 1: 0;
    *(char*)0x220F = ((v3 >>> 6) & 0x1) || ((v3 >>> 7) & 0x1) != ((v3 >>> 11) & 0x1) ? 0: 1;
    *(short*)0x2100 = (unsigned short)(v3 & 0x1) | ((unsigned short)1 << 1) | ((unsigned short)((v3 >>> 2) & 0x1) << 2) | ((unsigned short)0 << 3) | ((unsigned short)((v3 >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)(unsigned char)((v3 >>> 6) & 0x3f) << 6) | ((unsigned short)v1 << 12) | ((unsigned short)((v3 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmpxchg8b_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(long long*)0xA3B17984 = cmpxchg8b(*(long long*)0xA3B17984);
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)2 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmpxchg8b_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(long long*)0x313EC0E8 = cmpxchg8b(*(long long*)0x313EC0E8);
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 1;
    *(char*)0x2201 = 0;
    *(char*)0x2202 = 1;
    *(char*)0x2203 = 0;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)3799 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmpxchg8b_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(long long*)0x2 = cmpxchg8b(*(long long*)0x2);
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)2 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmpxchg8b_locked_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    short v3 = *(short*)0x1100;
    long long* ptr0 = *(unsigned int*)0x1000;
    int v4 = *(int*)0x1004;
    int v5 = *(int*)0x1008;
    int v6 = *(int*)0x100C;
    int v7 = *(int*)0x1010;
    int v8 = *(int*)0x1014;
    int v9 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    *ptr0 = cmpxchg8b(*ptr0);
    *(unsigned int*)0x2000 = ptr0;
    *(int*)0x2004 = v4;
    *(int*)0x2008 = v5;
    *(int*)0x200C = v6;
    *(int*)0x2010 = v7;
    *(int*)0x2014 = v8;
    *(int*)0x2018 = v9;
    *(char*)0x2200 = (v3 >>> 11) & 0x1 ? 1: 0;
    *(char*)0x2201 = (v3 >>> 11) & 0x1 ? 0: 1;
    *(char*)0x2202 = v3 & 0x1 ? 1: 0;
    *(char*)0x2203 = v3 & 0x1 ? 0: 1;
    *(char*)0x2204 = (v3 >>> 6) & 0x1 ? 1: 0;
    *(char*)0x2205 = (v3 >>> 6) & 0x1 ? 0: 1;
    *(char*)0x2206 = (v3 & 0x1) || ((v3 >>> 6) & 0x1) ? 1: 0;
    *(char*)0x2207 = (v3 & 0x1) || ((v3 >>> 6) & 0x1) ? 0: 1;
    *(char*)0x2208 = (v3 >>> 7) & 0x1 ? 1: 0;
    *(char*)0x2209 = (v3 >>> 7) & 0x1 ? 0: 1;
    *(char*)0x220A = (v3 >>> 2) & 0x1 ? 1: 0;
    *(char*)0x220B = (v3 >>> 2) & 0x1 ? 0: 1;
    *(char*)0x220C = ((v3 >>> 7) & 0x1) != ((v3 >>> 11) & 0x1) ? 1: 0;
    *(char*)0x220D = ((v3 >>> 7) & 0x1) != ((v3 >>> 11) & 0x1) ? 0: 1;
    *(char*)0x220E = ((v3 >>> 6) & 0x1) || ((v3 >>> 7) & 0x1) != ((v3 >>> 11) & 0x1) ? 1: 0;
    *(char*)0x220F = ((v3 >>> 6) & 0x1) || ((v3 >>> 7) & 0x1) != ((v3 >>> 11) & 0x1) ? 0: 1;
    *(short*)0x2100 = (unsigned short)(v3 & 0x1) | ((unsigned short)1 << 1) | ((unsigned short)((v3 >>> 2) & 0x1) << 2) | ((unsigned short)0 << 3) | ((unsigned short)((v3 >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)(unsigned char)((v3 >>> 6) & 0x3f) << 6) | ((unsigned short)v1 << 12) | ((unsigned short)((v3 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmpxchg8b_locked_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(long long*)0xA3B17984 = cmpxchg8b(*(long long*)0xA3B17984);
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)2 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmpxchg8b_locked_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(long long*)0x313EC0E8 = cmpxchg8b(*(long long*)0x313EC0E8);
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 1;
    *(char*)0x2201 = 0;
    *(char*)0x2202 = 1;
    *(char*)0x2203 = 0;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)3799 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmpxchg8b_locked_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(long long*)0x2 = cmpxchg8b(*(long long*)0x2);
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)2 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmpxchg8b_locked_mv_plain() {
    long long* ptr0;
    *ptr0 = cmpxchg8b(*ptr0);
    return 0;
}

int cmpxchg8b_plain() {
    long long* ptr0;
    *ptr0 = cmpxchg8b(*ptr0);
    return 0;
}

int cmpxchg_locked_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    char v3 = (v2 >>> 8) & 0x1;
    char v4 = (v2 >>> 9) & 0x1;
    char v5 = (v2 >>> 10) & 0x1;
    char v6 = (v2 >>> 14) & 0x1;
    unsigned int v7 = *(unsigned int*)0x1000;
    unsigned int* ptr0 = *(unsigned int*)0x1004;
    int v8 = *(int*)0x1008;
    int v9 = *(int*)0x100C;
    int v10 = *(int*)0x1010;
    int v11 = *(int*)0x1014;
    int v12 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v13 = *ptr0 == v7;
    char v14 = *ptr0 > (int)v7;
    char v15 = __parity__((unsigned char)v7 - (unsigned char)*ptr0);
    char v16 = *ptr0 > v7;
    char v17 = (((v7 - *ptr0) ^ v7) & (*ptr0 ^ v7)) < 0;
    char v18 = (((v7 - *ptr0) ^ (*ptr0 ^ v7)) >>> 4) & 0x1;
    if(v13 != 0) {
        *ptr0 = v7;
    }
    else {
        v7 = *ptr0;
    }
    *(unsigned int*)0x2000 = v7;
    *(unsigned int*)0x2004 = ptr0;
    *(int*)0x2008 = v8;
    *(int*)0x200C = v9;
    *(int*)0x2010 = v10;
    *(int*)0x2014 = v11;
    *(int*)0x2018 = v12;
    *(char*)0x2200 = v17 ? 1: 0;
    *(char*)0x2201 = v17 ? 0: 1;
    *(char*)0x2202 = v16 ? 1: 0;
    *(char*)0x2203 = v16 ? 0: 1;
    *(char*)0x2204 = v13 ? 1: 0;
    *(char*)0x2205 = v13 ? 0: 1;
    *(char*)0x2206 = v16 || v13 ? 1: 0;
    *(char*)0x2207 = v16 || v13 ? 0: 1;
    *(char*)0x2208 = v14 ? 1: 0;
    *(char*)0x2209 = v14 ? 0: 1;
    *(char*)0x220A = v15 ? 1: 0;
    *(char*)0x220B = v15 ? 0: 1;
    *(char*)0x220C = v14 != v17 ? 1: 0;
    *(char*)0x220D = v14 != v17 ? 0: 1;
    *(char*)0x220E = v13 || v14 != v17 ? 1: 0;
    *(char*)0x220F = v13 || v14 != v17 ? 0: 1;
    *(short*)0x2100 = (unsigned short)v16 | ((unsigned short)1 << 1) | ((unsigned short)v15 << 2) | ((unsigned short)0 << 3) | ((unsigned short)v18 << 4) | ((unsigned short)0 << 5) | ((unsigned short)v13 << 6) | ((unsigned short)v14 << 7) | ((unsigned short)v3 << 8) | ((unsigned short)v4 << 9) | ((unsigned short)v5 << 10) | ((unsigned short)v17 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)v6 << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmpxchg_locked_mv_constant_complex1() {
    int v0;
    char v1;
    int v2 = -1548650108;
    *(unsigned int*)0x2050 = &v0;
    char v3 = *(int*)0x6671AD7 == -1548650108;
    char v4 = *(int*)0x6671AD7 > -1548650108;
    char v5 = __parity__(132 - (unsigned char)*(int*)0x6671AD7);
    char v6 = *(unsigned int*)0x6671AD7 > 2746317188;
    char v7 = (((-1548650108 - *(int*)0x6671AD7) ^ 0xa3b17984) & (*(int*)0x6671AD7 ^ 0xa3b17984)) < 0;
    char v8 = (((-1548650108 - *(int*)0x6671AD7) ^ (*(int*)0x6671AD7 ^ 0xa3b17984)) >>> 4) & 0x1;
    if(v3 != 0) {
        *(int*)0x6671AD7 = -1548650108;
    }
    else {
        v2 = *(int*)0x6671AD7;
    }
    *(int*)0x2000 = v2;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = v7 ? 1: 0;
    *(char*)0x2201 = v7 ? 0: 1;
    *(char*)0x2202 = v6 ? 1: 0;
    *(char*)0x2203 = v6 ? 0: 1;
    *(char*)0x2204 = v3 ? 1: 0;
    *(char*)0x2205 = v3 ? 0: 1;
    *(char*)0x2206 = v6 || v3 ? 1: 0;
    *(char*)0x2207 = v6 || v3 ? 0: 1;
    *(char*)0x2208 = v4 ? 1: 0;
    *(char*)0x2209 = v4 ? 0: 1;
    *(char*)0x220A = v5 ? 1: 0;
    *(char*)0x220B = v5 ? 0: 1;
    *(char*)0x220C = v4 != v7 ? 1: 0;
    *(char*)0x220D = v4 != v7 ? 0: 1;
    *(char*)0x220E = v3 || v4 != v7 ? 1: 0;
    *(char*)0x220F = v3 || v4 != v7 ? 0: 1;
    *(short*)0x2100 = (unsigned short)v6 | ((unsigned short)1 << 1) | ((unsigned short)v5 << 2) | ((unsigned short)0 << 3) | ((unsigned short)v8 << 4) | ((unsigned short)0 << 5) | ((unsigned short)v3 << 6) | ((unsigned short)v4 << 7) | ((unsigned short)0 << 8) | ((unsigned short)v7 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmpxchg_locked_mv_constant_complex2() {
    int v0;
    char v1;
    int v2 = 826196200;
    *(unsigned int*)0x2050 = &v0;
    char v3 = *(int*)0x496E81C3 == 826196200;
    char v4 = *(int*)0x496E81C3 > 826196200;
    char v5 = __parity__(232 - (unsigned char)*(int*)0x496E81C3);
    char v6 = *(unsigned int*)0x496E81C3 > 826196200;
    char v7 = (((826196200 - *(int*)0x496E81C3) ^ 0x313ec0e8) & (*(int*)0x496E81C3 ^ 0x313ec0e8)) < 0;
    char v8 = (((826196200 - *(int*)0x496E81C3) ^ (*(int*)0x496E81C3 ^ 0x313ec0e8)) >>> 4) & 0x1;
    if(v3 != 0) {
        *(int*)0x496E81C3 = 826196200;
    }
    else {
        v2 = *(int*)0x496E81C3;
    }
    *(int*)0x2000 = v2;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = v7 ? 1: 0;
    *(char*)0x2201 = v7 ? 0: 1;
    *(char*)0x2202 = v6 ? 1: 0;
    *(char*)0x2203 = v6 ? 0: 1;
    *(char*)0x2204 = v3 ? 1: 0;
    *(char*)0x2205 = v3 ? 0: 1;
    *(char*)0x2206 = v6 || v3 ? 1: 0;
    *(char*)0x2207 = v6 || v3 ? 0: 1;
    *(char*)0x2208 = v4 ? 1: 0;
    *(char*)0x2209 = v4 ? 0: 1;
    *(char*)0x220A = v5 ? 1: 0;
    *(char*)0x220B = v5 ? 0: 1;
    *(char*)0x220C = v4 != v7 ? 1: 0;
    *(char*)0x220D = v4 != v7 ? 0: 1;
    *(char*)0x220E = v3 || v4 != v7 ? 1: 0;
    *(char*)0x220F = v3 || v4 != v7 ? 0: 1;
    *(short*)0x2100 = (unsigned short)v6 | ((unsigned short)1 << 1) | ((unsigned short)v5 << 2) | ((unsigned short)0 << 3) | ((unsigned short)v8 << 4) | ((unsigned short)0 << 5) | ((unsigned short)v3 << 6) | ((unsigned short)v4 << 7) | ((unsigned short)6 << 8) | ((unsigned short)v7 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmpxchg_locked_mv_constant_simple() {
    int v0;
    char v1;
    int v2 = 2;
    *(unsigned int*)0x2050 = &v0;
    char v3 = *(int*)0x3 == 2;
    char v4 = *(int*)0x3 > 2;
    char v5 = __parity__(2 - (unsigned char)*(int*)0x3);
    char v6 = *(unsigned int*)0x3 > 2;
    char v7 = (((2 - *(int*)0x3) ^ 0x2) & (*(int*)0x3 ^ 0x2)) < 0;
    char v8 = (((2 - *(int*)0x3) ^ (*(int*)0x3 ^ 0x2)) >>> 4) & 0x1;
    if(v3 != 0) {
        *(int*)0x3 = 2;
    }
    else {
        v2 = *(int*)0x3;
    }
    *(int*)0x2000 = v2;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = v7 ? 1: 0;
    *(char*)0x2201 = v7 ? 0: 1;
    *(char*)0x2202 = v6 ? 1: 0;
    *(char*)0x2203 = v6 ? 0: 1;
    *(char*)0x2204 = v3 ? 1: 0;
    *(char*)0x2205 = v3 ? 0: 1;
    *(char*)0x2206 = v6 || v3 ? 1: 0;
    *(char*)0x2207 = v6 || v3 ? 0: 1;
    *(char*)0x2208 = v4 ? 1: 0;
    *(char*)0x2209 = v4 ? 0: 1;
    *(char*)0x220A = v5 ? 1: 0;
    *(char*)0x220B = v5 ? 0: 1;
    *(char*)0x220C = v4 != v7 ? 1: 0;
    *(char*)0x220D = v4 != v7 ? 0: 1;
    *(char*)0x220E = v3 || v4 != v7 ? 1: 0;
    *(char*)0x220F = v3 || v4 != v7 ? 0: 1;
    *(short*)0x2100 = (unsigned short)v6 | ((unsigned short)1 << 1) | ((unsigned short)v5 << 2) | ((unsigned short)0 << 3) | ((unsigned short)v8 << 4) | ((unsigned short)0 << 5) | ((unsigned short)v3 << 6) | ((unsigned short)v4 << 7) | ((unsigned short)0 << 8) | ((unsigned short)v7 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cmpxchg_locked_mv_plain() {
    int* ptr0;
    int v0;
    if(*ptr0 == v0) {
        *ptr0 = v0;
    }
    return 0;
}

int cpuid_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    short v3 = (unsigned short)*(int*)0x1000;
    short v4 = (unsigned short)(*(int*)0x1000 >>> 16);
    int v5 = *(int*)0x1004;
    int v6 = *(int*)0x1008;
    int v7 = *(int*)0x100C;
    int v8 = *(int*)0x1010;
    int v9 = *(int*)0x1014;
    int v10 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    cpuid();
    *(int*)0x2000 = (unsigned int)v3 | ((unsigned int)v4 << 16);
    *(int*)0x2004 = v5;
    *(int*)0x2008 = v6;
    *(int*)0x200C = v7;
    *(int*)0x2010 = v8;
    *(int*)0x2014 = v9;
    *(int*)0x2018 = v10;
    *(char*)0x2200 = (v2 >>> 11) & 0x1 ? 1: 0;
    *(char*)0x2201 = (v2 >>> 11) & 0x1 ? 0: 1;
    *(char*)0x2202 = v2 & 0x1 ? 1: 0;
    *(char*)0x2203 = v2 & 0x1 ? 0: 1;
    *(char*)0x2204 = (v2 >>> 6) & 0x1 ? 1: 0;
    *(char*)0x2205 = (v2 >>> 6) & 0x1 ? 0: 1;
    *(char*)0x2206 = (v2 & 0x1) || ((v2 >>> 6) & 0x1) ? 1: 0;
    *(char*)0x2207 = (v2 & 0x1) || ((v2 >>> 6) & 0x1) ? 0: 1;
    *(char*)0x2208 = (v2 >>> 7) & 0x1 ? 1: 0;
    *(char*)0x2209 = (v2 >>> 7) & 0x1 ? 0: 1;
    *(char*)0x220A = (v2 >>> 2) & 0x1 ? 1: 0;
    *(char*)0x220B = (v2 >>> 2) & 0x1 ? 0: 1;
    *(char*)0x220C = ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 1: 0;
    *(char*)0x220D = ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 0: 1;
    *(char*)0x220E = ((v2 >>> 6) & 0x1) || ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 1: 0;
    *(char*)0x220F = ((v2 >>> 6) & 0x1) || ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 0: 1;
    *(short*)0x2100 = (unsigned short)(v2 & 0x1) | ((unsigned short)1 << 1) | ((unsigned short)((v2 >>> 2) & 0x1) << 2) | ((unsigned short)0 << 3) | ((unsigned short)((v2 >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)(unsigned char)((v2 >>> 6) & 0x3f) << 6) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cpuid_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    cpuid();
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)2 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cpuid_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    cpuid();
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 1;
    *(char*)0x2201 = 0;
    *(char*)0x2202 = 1;
    *(char*)0x2203 = 0;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)3799 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cpuid_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    cpuid();
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)2 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int cpuid_plain() {
    cpuid();
    return 0;
}

int invd_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    short v3 = (unsigned short)*(int*)0x1000;
    short v4 = (unsigned short)(*(int*)0x1000 >>> 16);
    int v5 = *(int*)0x1004;
    int v6 = *(int*)0x1008;
    int v7 = *(int*)0x100C;
    int v8 = *(int*)0x1010;
    int v9 = *(int*)0x1014;
    int v10 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    invd();
    *(int*)0x2000 = (unsigned int)v3 | ((unsigned int)v4 << 16);
    *(int*)0x2004 = v5;
    *(int*)0x2008 = v6;
    *(int*)0x200C = v7;
    *(int*)0x2010 = v8;
    *(int*)0x2014 = v9;
    *(int*)0x2018 = v10;
    *(char*)0x2200 = (v2 >>> 11) & 0x1 ? 1: 0;
    *(char*)0x2201 = (v2 >>> 11) & 0x1 ? 0: 1;
    *(char*)0x2202 = v2 & 0x1 ? 1: 0;
    *(char*)0x2203 = v2 & 0x1 ? 0: 1;
    *(char*)0x2204 = (v2 >>> 6) & 0x1 ? 1: 0;
    *(char*)0x2205 = (v2 >>> 6) & 0x1 ? 0: 1;
    *(char*)0x2206 = (v2 & 0x1) || ((v2 >>> 6) & 0x1) ? 1: 0;
    *(char*)0x2207 = (v2 & 0x1) || ((v2 >>> 6) & 0x1) ? 0: 1;
    *(char*)0x2208 = (v2 >>> 7) & 0x1 ? 1: 0;
    *(char*)0x2209 = (v2 >>> 7) & 0x1 ? 0: 1;
    *(char*)0x220A = (v2 >>> 2) & 0x1 ? 1: 0;
    *(char*)0x220B = (v2 >>> 2) & 0x1 ? 0: 1;
    *(char*)0x220C = ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 1: 0;
    *(char*)0x220D = ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 0: 1;
    *(char*)0x220E = ((v2 >>> 6) & 0x1) || ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 1: 0;
    *(char*)0x220F = ((v2 >>> 6) & 0x1) || ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 0: 1;
    *(short*)0x2100 = (unsigned short)(v2 & 0x1) | ((unsigned short)1 << 1) | ((unsigned short)((v2 >>> 2) & 0x1) << 2) | ((unsigned short)0 << 3) | ((unsigned short)((v2 >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)(unsigned char)((v2 >>> 6) & 0x3f) << 6) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int invd_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    invd();
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)2 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int invd_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    invd();
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 1;
    *(char*)0x2201 = 0;
    *(char*)0x2202 = 1;
    *(char*)0x2203 = 0;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)3799 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int invd_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    invd();
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)2 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int invd_plain() {
    invd();
    return 0;
}

int invlpg_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    short v3 = *(short*)0x1100;
    char* ptr0 = *(unsigned int*)0x1000;
    int v4 = *(int*)0x1004;
    int v5 = *(int*)0x1008;
    int v6 = *(int*)0x100C;
    int v7 = *(int*)0x1010;
    int v8 = *(int*)0x1014;
    int v9 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    *ptr0 = invlpg(*ptr0);
    *(unsigned int*)0x2000 = ptr0;
    *(int*)0x2004 = v4;
    *(int*)0x2008 = v5;
    *(int*)0x200C = v6;
    *(int*)0x2010 = v7;
    *(int*)0x2014 = v8;
    *(int*)0x2018 = v9;
    *(char*)0x2200 = (v3 >>> 11) & 0x1 ? 1: 0;
    *(char*)0x2201 = (v3 >>> 11) & 0x1 ? 0: 1;
    *(char*)0x2202 = v3 & 0x1 ? 1: 0;
    *(char*)0x2203 = v3 & 0x1 ? 0: 1;
    *(char*)0x2204 = (v3 >>> 6) & 0x1 ? 1: 0;
    *(char*)0x2205 = (v3 >>> 6) & 0x1 ? 0: 1;
    *(char*)0x2206 = (v3 & 0x1) || ((v3 >>> 6) & 0x1) ? 1: 0;
    *(char*)0x2207 = (v3 & 0x1) || ((v3 >>> 6) & 0x1) ? 0: 1;
    *(char*)0x2208 = (v3 >>> 7) & 0x1 ? 1: 0;
    *(char*)0x2209 = (v3 >>> 7) & 0x1 ? 0: 1;
    *(char*)0x220A = (v3 >>> 2) & 0x1 ? 1: 0;
    *(char*)0x220B = (v3 >>> 2) & 0x1 ? 0: 1;
    *(char*)0x220C = ((v3 >>> 7) & 0x1) != ((v3 >>> 11) & 0x1) ? 1: 0;
    *(char*)0x220D = ((v3 >>> 7) & 0x1) != ((v3 >>> 11) & 0x1) ? 0: 1;
    *(char*)0x220E = ((v3 >>> 6) & 0x1) || ((v3 >>> 7) & 0x1) != ((v3 >>> 11) & 0x1) ? 1: 0;
    *(char*)0x220F = ((v3 >>> 6) & 0x1) || ((v3 >>> 7) & 0x1) != ((v3 >>> 11) & 0x1) ? 0: 1;
    *(short*)0x2100 = (unsigned short)(v3 & 0x1) | ((unsigned short)1 << 1) | ((unsigned short)((v3 >>> 2) & 0x1) << 2) | ((unsigned short)0 << 3) | ((unsigned short)((v3 >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)(unsigned char)((v3 >>> 6) & 0x3f) << 6) | ((unsigned short)v1 << 12) | ((unsigned short)((v3 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int invlpg_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(char*)0xA3B17984 = invlpg(*(char*)0xA3B17984);
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)2 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int invlpg_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(char*)0x313EC0E8 = invlpg(*(char*)0x313EC0E8);
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 1;
    *(char*)0x2201 = 0;
    *(char*)0x2202 = 1;
    *(char*)0x2203 = 0;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)3799 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int invlpg_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(char*)0x2 = invlpg(*(char*)0x2);
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)2 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int invlpg_plain() {
    char* ptr0;
    *ptr0 = invlpg(*ptr0);
    return 0;
}

int main() {
    callAll();
    return 0;
}

int rdmsr_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    short v3 = (unsigned short)*(int*)0x1000;
    short v4 = (unsigned short)(*(int*)0x1000 >>> 16);
    int v5 = *(int*)0x1004;
    int v6 = *(int*)0x1008;
    int v7 = *(int*)0x100C;
    int v8 = *(int*)0x1010;
    int v9 = *(int*)0x1014;
    int v10 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    rdmsr();
    *(int*)0x2000 = (unsigned int)v3 | ((unsigned int)v4 << 16);
    *(int*)0x2004 = v5;
    *(int*)0x2008 = v6;
    *(int*)0x200C = v7;
    *(int*)0x2010 = v8;
    *(int*)0x2014 = v9;
    *(int*)0x2018 = v10;
    *(char*)0x2200 = (v2 >>> 11) & 0x1 ? 1: 0;
    *(char*)0x2201 = (v2 >>> 11) & 0x1 ? 0: 1;
    *(char*)0x2202 = v2 & 0x1 ? 1: 0;
    *(char*)0x2203 = v2 & 0x1 ? 0: 1;
    *(char*)0x2204 = (v2 >>> 6) & 0x1 ? 1: 0;
    *(char*)0x2205 = (v2 >>> 6) & 0x1 ? 0: 1;
    *(char*)0x2206 = (v2 & 0x1) || ((v2 >>> 6) & 0x1) ? 1: 0;
    *(char*)0x2207 = (v2 & 0x1) || ((v2 >>> 6) & 0x1) ? 0: 1;
    *(char*)0x2208 = (v2 >>> 7) & 0x1 ? 1: 0;
    *(char*)0x2209 = (v2 >>> 7) & 0x1 ? 0: 1;
    *(char*)0x220A = (v2 >>> 2) & 0x1 ? 1: 0;
    *(char*)0x220B = (v2 >>> 2) & 0x1 ? 0: 1;
    *(char*)0x220C = ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 1: 0;
    *(char*)0x220D = ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 0: 1;
    *(char*)0x220E = ((v2 >>> 6) & 0x1) || ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 1: 0;
    *(char*)0x220F = ((v2 >>> 6) & 0x1) || ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 0: 1;
    *(short*)0x2100 = (unsigned short)(v2 & 0x1) | ((unsigned short)1 << 1) | ((unsigned short)((v2 >>> 2) & 0x1) << 2) | ((unsigned short)0 << 3) | ((unsigned short)((v2 >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)(unsigned char)((v2 >>> 6) & 0x3f) << 6) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int rdmsr_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    rdmsr();
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)2 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int rdmsr_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    rdmsr();
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 1;
    *(char*)0x2201 = 0;
    *(char*)0x2202 = 1;
    *(char*)0x2203 = 0;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)3799 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int rdmsr_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    rdmsr();
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)2 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int rdmsr_plain() {
    rdmsr();
    return 0;
}

int rdtsc_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    short v3 = (unsigned short)*(int*)0x1000;
    short v4 = (unsigned short)(*(int*)0x1000 >>> 16);
    int v5 = *(int*)0x1004;
    int v6 = *(int*)0x1008;
    int v7 = *(int*)0x100C;
    int v8 = *(int*)0x1010;
    int v9 = *(int*)0x1014;
    int v10 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    rdtsc();
    *(int*)0x2000 = (unsigned int)v3 | ((unsigned int)v4 << 16);
    *(int*)0x2004 = v5;
    *(int*)0x2008 = v6;
    *(int*)0x200C = v7;
    *(int*)0x2010 = v8;
    *(int*)0x2014 = v9;
    *(int*)0x2018 = v10;
    *(char*)0x2200 = (v2 >>> 11) & 0x1 ? 1: 0;
    *(char*)0x2201 = (v2 >>> 11) & 0x1 ? 0: 1;
    *(char*)0x2202 = v2 & 0x1 ? 1: 0;
    *(char*)0x2203 = v2 & 0x1 ? 0: 1;
    *(char*)0x2204 = (v2 >>> 6) & 0x1 ? 1: 0;
    *(char*)0x2205 = (v2 >>> 6) & 0x1 ? 0: 1;
    *(char*)0x2206 = (v2 & 0x1) || ((v2 >>> 6) & 0x1) ? 1: 0;
    *(char*)0x2207 = (v2 & 0x1) || ((v2 >>> 6) & 0x1) ? 0: 1;
    *(char*)0x2208 = (v2 >>> 7) & 0x1 ? 1: 0;
    *(char*)0x2209 = (v2 >>> 7) & 0x1 ? 0: 1;
    *(char*)0x220A = (v2 >>> 2) & 0x1 ? 1: 0;
    *(char*)0x220B = (v2 >>> 2) & 0x1 ? 0: 1;
    *(char*)0x220C = ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 1: 0;
    *(char*)0x220D = ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 0: 1;
    *(char*)0x220E = ((v2 >>> 6) & 0x1) || ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 1: 0;
    *(char*)0x220F = ((v2 >>> 6) & 0x1) || ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 0: 1;
    *(short*)0x2100 = (unsigned short)(v2 & 0x1) | ((unsigned short)1 << 1) | ((unsigned short)((v2 >>> 2) & 0x1) << 2) | ((unsigned short)0 << 3) | ((unsigned short)((v2 >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)(unsigned char)((v2 >>> 6) & 0x3f) << 6) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int rdtsc_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    rdtsc();
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)2 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int rdtsc_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    rdtsc();
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 1;
    *(char*)0x2201 = 0;
    *(char*)0x2202 = 1;
    *(char*)0x2203 = 0;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)3799 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int rdtsc_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    rdtsc();
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)2 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int rdtsc_plain() {
    rdtsc();
    return 0;
}

void sub_8049087() {
}

int wbinvd_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    short v3 = (unsigned short)*(int*)0x1000;
    short v4 = (unsigned short)(*(int*)0x1000 >>> 16);
    int v5 = *(int*)0x1004;
    int v6 = *(int*)0x1008;
    int v7 = *(int*)0x100C;
    int v8 = *(int*)0x1010;
    int v9 = *(int*)0x1014;
    int v10 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    wbinvd();
    *(int*)0x2000 = (unsigned int)v3 | ((unsigned int)v4 << 16);
    *(int*)0x2004 = v5;
    *(int*)0x2008 = v6;
    *(int*)0x200C = v7;
    *(int*)0x2010 = v8;
    *(int*)0x2014 = v9;
    *(int*)0x2018 = v10;
    *(char*)0x2200 = (v2 >>> 11) & 0x1 ? 1: 0;
    *(char*)0x2201 = (v2 >>> 11) & 0x1 ? 0: 1;
    *(char*)0x2202 = v2 & 0x1 ? 1: 0;
    *(char*)0x2203 = v2 & 0x1 ? 0: 1;
    *(char*)0x2204 = (v2 >>> 6) & 0x1 ? 1: 0;
    *(char*)0x2205 = (v2 >>> 6) & 0x1 ? 0: 1;
    *(char*)0x2206 = (v2 & 0x1) || ((v2 >>> 6) & 0x1) ? 1: 0;
    *(char*)0x2207 = (v2 & 0x1) || ((v2 >>> 6) & 0x1) ? 0: 1;
    *(char*)0x2208 = (v2 >>> 7) & 0x1 ? 1: 0;
    *(char*)0x2209 = (v2 >>> 7) & 0x1 ? 0: 1;
    *(char*)0x220A = (v2 >>> 2) & 0x1 ? 1: 0;
    *(char*)0x220B = (v2 >>> 2) & 0x1 ? 0: 1;
    *(char*)0x220C = ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 1: 0;
    *(char*)0x220D = ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 0: 1;
    *(char*)0x220E = ((v2 >>> 6) & 0x1) || ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 1: 0;
    *(char*)0x220F = ((v2 >>> 6) & 0x1) || ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 0: 1;
    *(short*)0x2100 = (unsigned short)(v2 & 0x1) | ((unsigned short)1 << 1) | ((unsigned short)((v2 >>> 2) & 0x1) << 2) | ((unsigned short)0 << 3) | ((unsigned short)((v2 >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)(unsigned char)((v2 >>> 6) & 0x3f) << 6) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int wbinvd_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    wbinvd();
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)2 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int wbinvd_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    wbinvd();
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 1;
    *(char*)0x2201 = 0;
    *(char*)0x2202 = 1;
    *(char*)0x2203 = 0;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)3799 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int wbinvd_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    wbinvd();
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)2 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int wbinvd_plain() {
    wbinvd();
    return 0;
}

int wrmsr_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    short v3 = (unsigned short)*(int*)0x1000;
    short v4 = (unsigned short)(*(int*)0x1000 >>> 16);
    int v5 = *(int*)0x1004;
    int v6 = *(int*)0x1008;
    int v7 = *(int*)0x100C;
    int v8 = *(int*)0x1010;
    int v9 = *(int*)0x1014;
    int v10 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    wrmsr();
    *(int*)0x2000 = (unsigned int)v3 | ((unsigned int)v4 << 16);
    *(int*)0x2004 = v5;
    *(int*)0x2008 = v6;
    *(int*)0x200C = v7;
    *(int*)0x2010 = v8;
    *(int*)0x2014 = v9;
    *(int*)0x2018 = v10;
    *(char*)0x2200 = (v2 >>> 11) & 0x1 ? 1: 0;
    *(char*)0x2201 = (v2 >>> 11) & 0x1 ? 0: 1;
    *(char*)0x2202 = v2 & 0x1 ? 1: 0;
    *(char*)0x2203 = v2 & 0x1 ? 0: 1;
    *(char*)0x2204 = (v2 >>> 6) & 0x1 ? 1: 0;
    *(char*)0x2205 = (v2 >>> 6) & 0x1 ? 0: 1;
    *(char*)0x2206 = (v2 & 0x1) || ((v2 >>> 6) & 0x1) ? 1: 0;
    *(char*)0x2207 = (v2 & 0x1) || ((v2 >>> 6) & 0x1) ? 0: 1;
    *(char*)0x2208 = (v2 >>> 7) & 0x1 ? 1: 0;
    *(char*)0x2209 = (v2 >>> 7) & 0x1 ? 0: 1;
    *(char*)0x220A = (v2 >>> 2) & 0x1 ? 1: 0;
    *(char*)0x220B = (v2 >>> 2) & 0x1 ? 0: 1;
    *(char*)0x220C = ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 1: 0;
    *(char*)0x220D = ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 0: 1;
    *(char*)0x220E = ((v2 >>> 6) & 0x1) || ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 1: 0;
    *(char*)0x220F = ((v2 >>> 6) & 0x1) || ((v2 >>> 7) & 0x1) != ((v2 >>> 11) & 0x1) ? 0: 1;
    *(short*)0x2100 = (unsigned short)(v2 & 0x1) | ((unsigned short)1 << 1) | ((unsigned short)((v2 >>> 2) & 0x1) << 2) | ((unsigned short)0 << 3) | ((unsigned short)((v2 >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)(unsigned char)((v2 >>> 6) & 0x3f) << 6) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int wrmsr_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    wrmsr();
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)2 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int wrmsr_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    wrmsr();
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 1;
    *(char*)0x2201 = 0;
    *(char*)0x2202 = 1;
    *(char*)0x2203 = 0;
    *(char*)0x2204 = 1;
    *(char*)0x2205 = 0;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)3799 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int wrmsr_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    wrmsr();
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)2 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int wrmsr_plain() {
    wrmsr();
    return 0;
}

int xadd1_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    char v3 = (unsigned char)*(int*)0x1000;
    int v4 = (unsigned int)((*(int*)0x1000 >>> 8) & 0xffffff);
    char v5 = (unsigned char)*(int*)0x1004;
    int v6 = (unsigned int)((*(int*)0x1004 >>> 8) & 0xffffff);
    int v7 = *(int*)0x1008;
    int v8 = *(int*)0x100C;
    int v9 = *(int*)0x1010;
    int v10 = *(int*)0x1014;
    int v11 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v12 = v5;
    v5 += v3;
    char v13 = __carry__(v3, v12);
    char v14 = ((v5 ^ v12) & ~(v3 ^ v12)) < 0;
    *(int*)0x2000 = (unsigned int)v12 | ((unsigned int)v4 << 8);
    *(int*)0x2004 = (unsigned int)v5 | ((unsigned int)v6 << 8);
    *(int*)0x2008 = v7;
    *(int*)0x200C = v8;
    *(int*)0x2010 = v9;
    *(int*)0x2014 = v10;
    *(int*)0x2018 = v11;
    *(char*)0x2200 = v14 ? 1: 0;
    *(char*)0x2201 = v14 ? 0: 1;
    *(char*)0x2202 = v13 ? 1: 0;
    *(char*)0x2203 = v13 ? 0: 1;
    *(char*)0x2204 = v5 ? 0: 1;
    *(char*)0x2205 = v5 ? 1: 0;
    *(char*)0x2206 = v13 || (v5 ? 0: 1) ? 1: 0;
    *(char*)0x2207 = v13 || (v5 ? 0: 1) ? 0: 1;
    *(char*)0x2208 = v5 < 0 ? 1: 0;
    *(char*)0x2209 = v5 < 0 ? 0: 1;
    *(char*)0x220A = __parity__(v5) ? 1: 0;
    *(char*)0x220B = __parity__(v5) ? 0: 1;
    *(char*)0x220C = v5 < 0 != v14 ? 1: 0;
    *(char*)0x220D = v5 < 0 != v14 ? 0: 1;
    *(char*)0x220E = (v5 ? 0: 1) || v5 < 0 != v14 ? 1: 0;
    *(char*)0x220F = (v5 ? 0: 1) || v5 < 0 != v14 ? 0: 1;
    *(short*)0x2100 = (unsigned short)v13 | ((unsigned short)1 << 1) | ((unsigned short)__parity__(v5) << 2) | ((unsigned short)0 << 3) | ((unsigned short)((((v3 ^ v12) ^ v5) >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)(v5 ? 0: 1) << 6) | ((unsigned short)(v5 < 0) << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v14 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int xadd1_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650025;
    *(int*)0x2004 = 0x6671a5b;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 1;
    *(char*)0x2201 = 0;
    *(char*)0x2202 = 1;
    *(char*)0x2203 = 0;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)2051 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int xadd1_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 0x313ec0c3;
    *(int*)0x2004 = 1231978923;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 1;
    *(char*)0x2203 = 0;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)1667 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int xadd1_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 3;
    *(int*)0x2004 = 5;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)6 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int xadd1_mv_plain() {
    return 0;
}

int xadd2_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    short v3 = (unsigned short)*(int*)0x1000;
    short v4 = (unsigned short)(*(int*)0x1000 >>> 16);
    short v5 = (unsigned short)*(int*)0x1004;
    short v6 = (unsigned short)(*(int*)0x1004 >>> 16);
    int v7 = *(int*)0x1008;
    int v8 = *(int*)0x100C;
    int v9 = *(int*)0x1010;
    int v10 = *(int*)0x1014;
    int v11 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    short v12 = v5;
    v5 += v3;
    char v13 = __carry__(v3, v12);
    char v14 = ((v5 ^ v12) & ~(v3 ^ v12)) < 0;
    *(int*)0x2000 = (unsigned int)v12 | ((unsigned int)v4 << 16);
    *(int*)0x2004 = (unsigned int)v5 | ((unsigned int)v6 << 16);
    *(int*)0x2008 = v7;
    *(int*)0x200C = v8;
    *(int*)0x2010 = v9;
    *(int*)0x2014 = v10;
    *(int*)0x2018 = v11;
    *(char*)0x2200 = v14 ? 1: 0;
    *(char*)0x2201 = v14 ? 0: 1;
    *(char*)0x2202 = v13 ? 1: 0;
    *(char*)0x2203 = v13 ? 0: 1;
    *(char*)0x2204 = v5 ? 0: 1;
    *(char*)0x2205 = v5 ? 1: 0;
    *(char*)0x2206 = v13 || (v5 ? 0: 1) ? 1: 0;
    *(char*)0x2207 = v13 || (v5 ? 0: 1) ? 0: 1;
    *(char*)0x2208 = v5 < 0 ? 1: 0;
    *(char*)0x2209 = v5 < 0 ? 0: 1;
    *(char*)0x220A = __parity__((unsigned char)v5) ? 1: 0;
    *(char*)0x220B = __parity__((unsigned char)v5) ? 0: 1;
    *(char*)0x220C = v5 < 0 != v14 ? 1: 0;
    *(char*)0x220D = v5 < 0 != v14 ? 0: 1;
    *(char*)0x220E = (v5 ? 0: 1) || v5 < 0 != v14 ? 1: 0;
    *(char*)0x220F = (v5 ? 0: 1) || v5 < 0 != v14 ? 0: 1;
    *(short*)0x2100 = (unsigned short)v13 | ((unsigned short)1 << 1) | ((unsigned short)__parity__((unsigned char)v5) << 2) | ((unsigned short)0 << 3) | ((unsigned short)((((v3 ^ v12) ^ v5) >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)(v5 ? 0: 1) << 6) | ((unsigned short)(v5 < 0) << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v14 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int xadd2_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548674345;
    *(int*)0x2004 = 0x667945b;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 1;
    *(char*)0x2201 = 0;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)0x882 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int xadd2_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 0x313e81c3;
    *(int*)0x2004 = 1231962795;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 1;
    *(char*)0x2201 = 0;
    *(char*)0x2202 = 1;
    *(char*)0x2203 = 0;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)3587 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int xadd2_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 3;
    *(int*)0x2004 = 5;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)6 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int xadd2_mv_plain() {
    return 0;
}

int xadd3_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    int v3 = *(int*)0x1000;
    int v4 = *(int*)0x1004;
    int v5 = *(int*)0x1008;
    int v6 = *(int*)0x100C;
    int v7 = *(int*)0x1010;
    int v8 = *(int*)0x1014;
    int v9 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    int v10 = v3 + v4;
    char v11 = __carry__(v3, v4);
    char v12 = ((v4 ^ v10) & ~(v3 ^ v4)) < 0;
    *(int*)0x2000 = v4;
    *(int*)0x2004 = v10;
    *(int*)0x2008 = v5;
    *(int*)0x200C = v6;
    *(int*)0x2010 = v7;
    *(int*)0x2014 = v8;
    *(int*)0x2018 = v9;
    *(char*)0x2200 = v12 ? 1: 0;
    *(char*)0x2201 = v12 ? 0: 1;
    *(char*)0x2202 = v11 ? 1: 0;
    *(char*)0x2203 = v11 ? 0: 1;
    *(char*)0x2204 = v10 ? 0: 1;
    *(char*)0x2205 = v10 ? 1: 0;
    *(char*)0x2206 = v11 || (v10 ? 0: 1) ? 1: 0;
    *(char*)0x2207 = v11 || (v10 ? 0: 1) ? 0: 1;
    *(char*)0x2208 = v10 < 0 ? 1: 0;
    *(char*)0x2209 = v10 < 0 ? 0: 1;
    *(char*)0x220A = __parity__((unsigned char)v10) ? 1: 0;
    *(char*)0x220B = __parity__((unsigned char)v10) ? 0: 1;
    *(char*)0x220C = v10 < 0 != v12 ? 1: 0;
    *(char*)0x220D = v10 < 0 != v12 ? 0: 1;
    *(char*)0x220E = (v10 ? 0: 1) || v10 < 0 != v12 ? 1: 0;
    *(char*)0x220F = (v10 ? 0: 1) || v10 < 0 != v12 ? 0: 1;
    *(short*)0x2100 = (unsigned short)v11 | ((unsigned short)1 << 1) | ((unsigned short)__parity__((unsigned char)v10) << 2) | ((unsigned short)0 << 3) | ((unsigned short)((((v3 ^ v4) ^ v10) >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)(v10 ? 0: 1) << 6) | ((unsigned short)(v10 < 0) << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v12 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int xadd3_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 0x6671ad7;
    *(int*)0x2004 = -1441229733;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)130 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int xadd3_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 1231978947;
    *(int*)0x2004 = 2058175147;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)1538 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int xadd3_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 3;
    *(int*)0x2004 = 5;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 1;
    *(char*)0x220B = 0;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)6 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int xadd3_plain() {
    return 0;
}

int xadd4_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    short v3 = *(short*)0x1100;
    int v4 = *(int*)0x1000;
    int* ptr0 = *(unsigned int*)0x1004;
    int v5 = *(int*)0x1008;
    int v6 = *(int*)0x100C;
    int v7 = *(int*)0x1010;
    int v8 = *(int*)0x1014;
    int v9 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    int v10 = *ptr0;
    *ptr0 = *ptr0 + v4;
    char v11 = *ptr0 ? 0: 1;
    char v12 = *ptr0 < 0;
    char v13 = __parity__((unsigned char)*ptr0);
    char v14 = (((v4 ^ v10) ^ *ptr0) >>> 4) & 0x1;
    char v15 = __carry__(v4, v10);
    char v16 = ((*ptr0 ^ v10) & ~(v4 ^ v10)) < 0;
    *(int*)0x2000 = v10;
    *(unsigned int*)0x2004 = ptr0;
    *(int*)0x2008 = v5;
    *(int*)0x200C = v6;
    *(int*)0x2010 = v7;
    *(int*)0x2014 = v8;
    *(int*)0x2018 = v9;
    *(char*)0x2200 = v16 ? 1: 0;
    *(char*)0x2201 = v16 ? 0: 1;
    *(char*)0x2202 = v15 ? 1: 0;
    *(char*)0x2203 = v15 ? 0: 1;
    *(char*)0x2204 = v11 ? 1: 0;
    *(char*)0x2205 = v11 ? 0: 1;
    *(char*)0x2206 = v15 || v11 ? 1: 0;
    *(char*)0x2207 = v15 || v11 ? 0: 1;
    *(char*)0x2208 = v12 ? 1: 0;
    *(char*)0x2209 = v12 ? 0: 1;
    *(char*)0x220A = v13 ? 1: 0;
    *(char*)0x220B = v13 ? 0: 1;
    *(char*)0x220C = v12 != v16 ? 1: 0;
    *(char*)0x220D = v12 != v16 ? 0: 1;
    *(char*)0x220E = v11 || v12 != v16 ? 1: 0;
    *(char*)0x220F = v11 || v12 != v16 ? 0: 1;
    *(short*)0x2100 = (unsigned short)v15 | ((unsigned short)1 << 1) | ((unsigned short)v13 << 2) | ((unsigned short)0 << 3) | ((unsigned short)v14 << 4) | ((unsigned short)0 << 5) | ((unsigned short)v11 << 6) | ((unsigned short)v12 << 7) | ((unsigned short)(unsigned char)((v3 >>> 8) & 0x7) << 8) | ((unsigned short)v16 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v3 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int xadd4_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    unsigned int v2 = *(unsigned int*)0x6671AD7;
    *(int*)0x6671AD7 = *(int*)0x6671AD7 - 1548650108;
    char v3 = *(int*)0x6671AD7 ? 0: 1;
    char v4 = *(int*)0x6671AD7 < 0;
    char v5 = __parity__((unsigned char)*(int*)0x6671AD7);
    char v6 = (((v2 ^ 0xa3b17984) ^ *(int*)0x6671AD7) >>> 4) & 0x1;
    char v7 = ((*(int*)0x6671AD7 ^ v2) & ~(v2 ^ 0xa3b17984)) < 0;
    *(unsigned int*)0x2000 = v2;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = v7 ? 1: 0;
    *(char*)0x2201 = v7 ? 0: 1;
    *(char*)0x2202 = v2 >= 1548650108 ? 1: 0;
    *(char*)0x2203 = v2 >= 1548650108 ? 0: 1;
    *(char*)0x2204 = v3 ? 1: 0;
    *(char*)0x2205 = v3 ? 0: 1;
    *(char*)0x2206 = v2 >= 1548650108 || v3 ? 1: 0;
    *(char*)0x2207 = v2 >= 1548650108 || v3 ? 0: 1;
    *(char*)0x2208 = v4 ? 1: 0;
    *(char*)0x2209 = v4 ? 0: 1;
    *(char*)0x220A = v5 ? 1: 0;
    *(char*)0x220B = v5 ? 0: 1;
    *(char*)0x220C = v4 != v7 ? 1: 0;
    *(char*)0x220D = v4 != v7 ? 0: 1;
    *(char*)0x220E = v3 || v4 != v7 ? 1: 0;
    *(char*)0x220F = v3 || v4 != v7 ? 0: 1;
    *(short*)0x2100 = (unsigned short)(v2 >= 1548650108) | ((unsigned short)1 << 1) | ((unsigned short)v5 << 2) | ((unsigned short)0 << 3) | ((unsigned short)v6 << 4) | ((unsigned short)0 << 5) | ((unsigned short)v3 << 6) | ((unsigned short)v4 << 7) | ((unsigned short)0 << 8) | ((unsigned short)v7 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int xadd4_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    unsigned int v2 = *(unsigned int*)0x496E81C3;
    *(int*)0x496E81C3 = *(int*)0x496E81C3 + 826196200;
    char v3 = *(int*)0x496E81C3 ? 0: 1;
    char v4 = *(int*)0x496E81C3 < 0;
    char v5 = __parity__((unsigned char)*(int*)0x496E81C3);
    char v6 = (((v2 ^ 0x313ec0e8) ^ *(int*)0x496E81C3) >>> 4) & 0x1;
    char v7 = ((*(int*)0x496E81C3 ^ v2) & ~(v2 ^ 0x313ec0e8)) < 0;
    *(unsigned int*)0x2000 = v2;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = v7 ? 1: 0;
    *(char*)0x2201 = v7 ? 0: 1;
    *(char*)0x2202 = v2 >= 3468771096 ? 1: 0;
    *(char*)0x2203 = v2 >= 3468771096 ? 0: 1;
    *(char*)0x2204 = v3 ? 1: 0;
    *(char*)0x2205 = v3 ? 0: 1;
    *(char*)0x2206 = v2 >= 3468771096 || v3 ? 1: 0;
    *(char*)0x2207 = v2 >= 3468771096 || v3 ? 0: 1;
    *(char*)0x2208 = v4 ? 1: 0;
    *(char*)0x2209 = v4 ? 0: 1;
    *(char*)0x220A = v5 ? 1: 0;
    *(char*)0x220B = v5 ? 0: 1;
    *(char*)0x220C = v4 != v7 ? 1: 0;
    *(char*)0x220D = v4 != v7 ? 0: 1;
    *(char*)0x220E = v3 || v4 != v7 ? 1: 0;
    *(char*)0x220F = v3 || v4 != v7 ? 0: 1;
    *(short*)0x2100 = (unsigned short)(v2 >= 3468771096) | ((unsigned short)1 << 1) | ((unsigned short)v5 << 2) | ((unsigned short)0 << 3) | ((unsigned short)v6 << 4) | ((unsigned short)0 << 5) | ((unsigned short)v3 << 6) | ((unsigned short)v4 << 7) | ((unsigned short)6 << 8) | ((unsigned short)v7 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int xadd4_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    unsigned int v2 = *(unsigned int*)0x3;
    *(int*)0x3 = *(int*)0x3 + 2;
    char v3 = *(int*)0x3 ? 0: 1;
    char v4 = *(int*)0x3 < 0;
    char v5 = __parity__((unsigned char)*(int*)0x3);
    char v6 = (((v2 ^ 0x2) ^ *(int*)0x3) >>> 4) & 0x1;
    char v7 = ((*(int*)0x3 ^ v2) & ~(v2 ^ 0x2)) < 0;
    *(unsigned int*)0x2000 = v2;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = v7 ? 1: 0;
    *(char*)0x2201 = v7 ? 0: 1;
    *(char*)0x2202 = v2 >= 0xfffffffe ? 1: 0;
    *(char*)0x2203 = v2 >= 0xfffffffe ? 0: 1;
    *(char*)0x2204 = v3 ? 1: 0;
    *(char*)0x2205 = v3 ? 0: 1;
    *(char*)0x2206 = v2 >= 0xfffffffe || v3 ? 1: 0;
    *(char*)0x2207 = v2 >= 0xfffffffe || v3 ? 0: 1;
    *(char*)0x2208 = v4 ? 1: 0;
    *(char*)0x2209 = v4 ? 0: 1;
    *(char*)0x220A = v5 ? 1: 0;
    *(char*)0x220B = v5 ? 0: 1;
    *(char*)0x220C = v4 != v7 ? 1: 0;
    *(char*)0x220D = v4 != v7 ? 0: 1;
    *(char*)0x220E = v3 || v4 != v7 ? 1: 0;
    *(char*)0x220F = v3 || v4 != v7 ? 0: 1;
    *(short*)0x2100 = (unsigned short)(v2 >= 0xfffffffe) | ((unsigned short)1 << 1) | ((unsigned short)v5 << 2) | ((unsigned short)0 << 3) | ((unsigned short)v6 << 4) | ((unsigned short)0 << 5) | ((unsigned short)v3 << 6) | ((unsigned short)v4 << 7) | ((unsigned short)0 << 8) | ((unsigned short)v7 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int xadd4_mv_plain() {
    int* ptr0;
    int v0;
    *ptr0 = *ptr0 + v0;
    return 0;
}

int xadd5_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    char v3 = (unsigned char)*(int*)0x1000;
    int v4 = (unsigned int)((*(int*)0x1000 >>> 8) & 0xffffff);
    int v5 = *(int*)0x1004;
    int v6 = *(int*)0x1008;
    int v7 = *(int*)0x100C;
    int v8 = *(int*)0x1010;
    int v9 = *(int*)0x1014;
    int v10 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    char v11 = v3;
    v3 *= 2;
    char v12 = __carry__(v3, v11);
    char v13 = ((v3 ^ v11) & ~(v3 ^ v11)) < 0;
    *(int*)0x2000 = (unsigned int)v11 | ((unsigned int)v4 << 8);
    *(int*)0x2004 = v5;
    *(int*)0x2008 = v6;
    *(int*)0x200C = v7;
    *(int*)0x2010 = v8;
    *(int*)0x2014 = v9;
    *(int*)0x2018 = v10;
    *(char*)0x2200 = v13 ? 1: 0;
    *(char*)0x2201 = v13 ? 0: 1;
    *(char*)0x2202 = v12 ? 1: 0;
    *(char*)0x2203 = v12 ? 0: 1;
    *(char*)0x2204 = v3 ? 0: 1;
    *(char*)0x2205 = v3 ? 1: 0;
    *(char*)0x2206 = v12 || (v3 ? 0: 1) ? 1: 0;
    *(char*)0x2207 = v12 || (v3 ? 0: 1) ? 0: 1;
    *(char*)0x2208 = v3 < 0 ? 1: 0;
    *(char*)0x2209 = v3 < 0 ? 0: 1;
    *(char*)0x220A = __parity__(v3) ? 1: 0;
    *(char*)0x220B = __parity__(v3) ? 0: 1;
    *(char*)0x220C = v3 < 0 != v13 ? 1: 0;
    *(char*)0x220D = v3 < 0 != v13 ? 0: 1;
    *(char*)0x220E = (v3 ? 0: 1) || v3 < 0 != v13 ? 1: 0;
    *(char*)0x220F = (v3 ? 0: 1) || v3 < 0 != v13 ? 0: 1;
    *(short*)0x2100 = (unsigned short)v12 | ((unsigned short)1 << 1) | ((unsigned short)__parity__(v3) << 2) | ((unsigned short)0 << 3) | ((unsigned short)((((v3 ^ v11) ^ v3) >>> 4) & 0x1) << 4) | ((unsigned short)0 << 5) | ((unsigned short)(v3 ? 0: 1) << 6) | ((unsigned short)(v3 < 0) << 7) | ((unsigned short)(unsigned char)((v2 >>> 8) & 0x7) << 8) | ((unsigned short)v13 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v2 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int xadd5_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = -1548650108;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)2 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int xadd5_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 826196200;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 1;
    *(char*)0x2203 = 0;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 1;
    *(char*)0x2207 = 0;
    *(char*)0x2208 = 1;
    *(char*)0x2209 = 0;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 1;
    *(char*)0x220D = 0;
    *(char*)0x220E = 1;
    *(char*)0x220F = 0;
    *(short*)0x2100 = (unsigned short)1667 | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int xadd5_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    *(int*)0x2000 = 2;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = 0;
    *(char*)0x2201 = 1;
    *(char*)0x2202 = 0;
    *(char*)0x2203 = 1;
    *(char*)0x2204 = 0;
    *(char*)0x2205 = 1;
    *(char*)0x2206 = 0;
    *(char*)0x2207 = 1;
    *(char*)0x2208 = 0;
    *(char*)0x2209 = 1;
    *(char*)0x220A = 0;
    *(char*)0x220B = 1;
    *(char*)0x220C = 0;
    *(char*)0x220D = 1;
    *(char*)0x220E = 0;
    *(char*)0x220F = 1;
    *(short*)0x2100 = (unsigned short)2 | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int xadd5_mv_plain() {
    return 0;
}

int xadd_locked_mv_allregs() {
    int v0;
    char v1;
    short v2 = *(short*)0x1100;
    short v3 = *(short*)0x1100;
    int v4 = *(int*)0x1000;
    int* ptr0 = *(unsigned int*)0x1004;
    int v5 = *(int*)0x1008;
    int v6 = *(int*)0x100C;
    int v7 = *(int*)0x1010;
    int v8 = *(int*)0x1014;
    int v9 = *(int*)0x1018;
    *(unsigned int*)0x2050 = &v0;
    int v10 = *ptr0;
    *ptr0 = *ptr0 + v4;
    char v11 = *ptr0 ? 0: 1;
    char v12 = *ptr0 < 0;
    char v13 = __parity__((unsigned char)*ptr0);
    char v14 = (((v4 ^ v10) ^ *ptr0) >>> 4) & 0x1;
    char v15 = __carry__(v4, v10);
    char v16 = ((*ptr0 ^ v10) & ~(v4 ^ v10)) < 0;
    *(int*)0x2000 = v10;
    *(unsigned int*)0x2004 = ptr0;
    *(int*)0x2008 = v5;
    *(int*)0x200C = v6;
    *(int*)0x2010 = v7;
    *(int*)0x2014 = v8;
    *(int*)0x2018 = v9;
    *(char*)0x2200 = v16 ? 1: 0;
    *(char*)0x2201 = v16 ? 0: 1;
    *(char*)0x2202 = v15 ? 1: 0;
    *(char*)0x2203 = v15 ? 0: 1;
    *(char*)0x2204 = v11 ? 1: 0;
    *(char*)0x2205 = v11 ? 0: 1;
    *(char*)0x2206 = v15 || v11 ? 1: 0;
    *(char*)0x2207 = v15 || v11 ? 0: 1;
    *(char*)0x2208 = v12 ? 1: 0;
    *(char*)0x2209 = v12 ? 0: 1;
    *(char*)0x220A = v13 ? 1: 0;
    *(char*)0x220B = v13 ? 0: 1;
    *(char*)0x220C = v12 != v16 ? 1: 0;
    *(char*)0x220D = v12 != v16 ? 0: 1;
    *(char*)0x220E = v11 || v12 != v16 ? 1: 0;
    *(char*)0x220F = v11 || v12 != v16 ? 0: 1;
    *(short*)0x2100 = (unsigned short)v15 | ((unsigned short)1 << 1) | ((unsigned short)v13 << 2) | ((unsigned short)0 << 3) | ((unsigned short)v14 << 4) | ((unsigned short)0 << 5) | ((unsigned short)v11 << 6) | ((unsigned short)v12 << 7) | ((unsigned short)(unsigned char)((v3 >>> 8) & 0x7) << 8) | ((unsigned short)v16 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)((v3 >>> 14) & 0x1) << 14) | ((unsigned short)0 << 15);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int xadd_locked_mv_constant_complex1() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    unsigned int v2 = *(unsigned int*)0x6671AD7;
    *(int*)0x6671AD7 = *(int*)0x6671AD7 - 1548650108;
    char v3 = *(int*)0x6671AD7 ? 0: 1;
    char v4 = *(int*)0x6671AD7 < 0;
    char v5 = __parity__((unsigned char)*(int*)0x6671AD7);
    char v6 = (((v2 ^ 0xa3b17984) ^ *(int*)0x6671AD7) >>> 4) & 0x1;
    char v7 = ((*(int*)0x6671AD7 ^ v2) & ~(v2 ^ 0xa3b17984)) < 0;
    *(unsigned int*)0x2000 = v2;
    *(int*)0x2004 = 0x6671ad7;
    *(int*)0x2008 = 1181241928;
    *(int*)0x200C = 0x392456c4;
    *(int*)0x2010 = -1131847516;
    *(int*)0x2014 = -1388565128;
    *(int*)0x2018 = 0xe465e152;
    *(char*)0x2200 = v7 ? 1: 0;
    *(char*)0x2201 = v7 ? 0: 1;
    *(char*)0x2202 = v2 >= 1548650108 ? 1: 0;
    *(char*)0x2203 = v2 >= 1548650108 ? 0: 1;
    *(char*)0x2204 = v3 ? 1: 0;
    *(char*)0x2205 = v3 ? 0: 1;
    *(char*)0x2206 = v2 >= 1548650108 || v3 ? 1: 0;
    *(char*)0x2207 = v2 >= 1548650108 || v3 ? 0: 1;
    *(char*)0x2208 = v4 ? 1: 0;
    *(char*)0x2209 = v4 ? 0: 1;
    *(char*)0x220A = v5 ? 1: 0;
    *(char*)0x220B = v5 ? 0: 1;
    *(char*)0x220C = v4 != v7 ? 1: 0;
    *(char*)0x220D = v4 != v7 ? 0: 1;
    *(char*)0x220E = v3 || v4 != v7 ? 1: 0;
    *(char*)0x220F = v3 || v4 != v7 ? 0: 1;
    *(short*)0x2100 = (unsigned short)(v2 >= 1548650108) | ((unsigned short)1 << 1) | ((unsigned short)v5 << 2) | ((unsigned short)0 << 3) | ((unsigned short)v6 << 4) | ((unsigned short)0 << 5) | ((unsigned short)v3 << 6) | ((unsigned short)v4 << 7) | ((unsigned short)0 << 8) | ((unsigned short)v7 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int xadd_locked_mv_constant_complex2() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    unsigned int v2 = *(unsigned int*)0x496E81C3;
    *(int*)0x496E81C3 = *(int*)0x496E81C3 + 826196200;
    char v3 = *(int*)0x496E81C3 ? 0: 1;
    char v4 = *(int*)0x496E81C3 < 0;
    char v5 = __parity__((unsigned char)*(int*)0x496E81C3);
    char v6 = (((v2 ^ 0x313ec0e8) ^ *(int*)0x496E81C3) >>> 4) & 0x1;
    char v7 = ((*(int*)0x496E81C3 ^ v2) & ~(v2 ^ 0x313ec0e8)) < 0;
    *(unsigned int*)0x2000 = v2;
    *(int*)0x2004 = 1231978947;
    *(int*)0x2008 = 507473074;
    *(int*)0x200C = 1315513779;
    *(int*)0x2010 = 1328621072;
    *(int*)0x2014 = 792175781;
    *(int*)0x2018 = -1851189324;
    *(char*)0x2200 = v7 ? 1: 0;
    *(char*)0x2201 = v7 ? 0: 1;
    *(char*)0x2202 = v2 >= 3468771096 ? 1: 0;
    *(char*)0x2203 = v2 >= 3468771096 ? 0: 1;
    *(char*)0x2204 = v3 ? 1: 0;
    *(char*)0x2205 = v3 ? 0: 1;
    *(char*)0x2206 = v2 >= 3468771096 || v3 ? 1: 0;
    *(char*)0x2207 = v2 >= 3468771096 || v3 ? 0: 1;
    *(char*)0x2208 = v4 ? 1: 0;
    *(char*)0x2209 = v4 ? 0: 1;
    *(char*)0x220A = v5 ? 1: 0;
    *(char*)0x220B = v5 ? 0: 1;
    *(char*)0x220C = v4 != v7 ? 1: 0;
    *(char*)0x220D = v4 != v7 ? 0: 1;
    *(char*)0x220E = v3 || v4 != v7 ? 1: 0;
    *(char*)0x220F = v3 || v4 != v7 ? 0: 1;
    *(short*)0x2100 = (unsigned short)(v2 >= 3468771096) | ((unsigned short)1 << 1) | ((unsigned short)v5 << 2) | ((unsigned short)0 << 3) | ((unsigned short)v6 << 4) | ((unsigned short)0 << 5) | ((unsigned short)v3 << 6) | ((unsigned short)v4 << 7) | ((unsigned short)6 << 8) | ((unsigned short)v7 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)1 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int xadd_locked_mv_constant_simple() {
    int v0;
    char v1;
    *(unsigned int*)0x2050 = &v0;
    unsigned int v2 = *(unsigned int*)0x3;
    *(int*)0x3 = *(int*)0x3 + 2;
    char v3 = *(int*)0x3 ? 0: 1;
    char v4 = *(int*)0x3 < 0;
    char v5 = __parity__((unsigned char)*(int*)0x3);
    char v6 = (((v2 ^ 0x2) ^ *(int*)0x3) >>> 4) & 0x1;
    char v7 = ((*(int*)0x3 ^ v2) & ~(v2 ^ 0x2)) < 0;
    *(unsigned int*)0x2000 = v2;
    *(int*)0x2004 = 3;
    *(int*)0x2008 = 4;
    *(int*)0x200C = 5;
    *(int*)0x2010 = 6;
    *(int*)0x2014 = 7;
    *(int*)0x2018 = 8;
    *(char*)0x2200 = v7 ? 1: 0;
    *(char*)0x2201 = v7 ? 0: 1;
    *(char*)0x2202 = v2 >= 0xfffffffe ? 1: 0;
    *(char*)0x2203 = v2 >= 0xfffffffe ? 0: 1;
    *(char*)0x2204 = v3 ? 1: 0;
    *(char*)0x2205 = v3 ? 0: 1;
    *(char*)0x2206 = v2 >= 0xfffffffe || v3 ? 1: 0;
    *(char*)0x2207 = v2 >= 0xfffffffe || v3 ? 0: 1;
    *(char*)0x2208 = v4 ? 1: 0;
    *(char*)0x2209 = v4 ? 0: 1;
    *(char*)0x220A = v5 ? 1: 0;
    *(char*)0x220B = v5 ? 0: 1;
    *(char*)0x220C = v4 != v7 ? 1: 0;
    *(char*)0x220D = v4 != v7 ? 0: 1;
    *(char*)0x220E = v3 || v4 != v7 ? 1: 0;
    *(char*)0x220F = v3 || v4 != v7 ? 0: 1;
    *(short*)0x2100 = (unsigned short)(v2 >= 0xfffffffe) | ((unsigned short)1 << 1) | ((unsigned short)v5 << 2) | ((unsigned short)0 << 3) | ((unsigned short)v6 << 4) | ((unsigned short)0 << 5) | ((unsigned short)v3 << 6) | ((unsigned short)v4 << 7) | ((unsigned short)0 << 8) | ((unsigned short)v7 << 11) | ((unsigned short)v1 << 12) | ((unsigned short)0 << 14);
    *(unsigned int*)0x2020 = (int*)(*(int*)0x2050 - (int)&v0);
    return 0;
}

int xadd_locked_mv_plain() {
    int* ptr0;
    int v0;
    *ptr0 = *ptr0 + v0;
    return 0;
}
