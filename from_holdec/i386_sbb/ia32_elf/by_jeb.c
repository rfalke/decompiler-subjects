
int main() {
    int v0 = 0;
    do {
        int v1 = 0;
        do {
            int v2 = sub((unsigned char)v0, (unsigned char)v1);
            int v3 = sbb_clear((unsigned char)v0, (unsigned char)v1);
            int v4 = sbb_set((unsigned char)v0, (unsigned char)v1);
            int v5 = v1;
            int v6 = v0;
            int v7 = v4;
            int v8 = sbb_simu(v6, (unsigned char)v5, 1);
            v5 = v1;
            v6 = v0;
            int v9 = v8;
            int v10 = sbb_simu(v6, (unsigned char)v5, 0);
            if(v3 != v2) {
                →printf("%3d = 0x%2x %3d = 0x%2x ->", v0, v0, v1, v1);
                →printf("sub=(%3d,%s,%s) ", (unsigned int)(v2 & 0xFF), v2 & 0x10000 ? &gvar_804A012: &gvar_804A00F, v2 & 0x1000000 ? &gvar_804A00C: &gvar_804A00F);
                →printf("sbb_clear=(%3d,%s,%s)\n", (unsigned int)(v3 & 0xFF), v3 & 0x10000 ? &gvar_804A012: &gvar_804A00F, v3 & 0x1000000 ? &gvar_804A00C: &gvar_804A00F);
            }
            if(v3 != v10) {
                →printf("%3d = 0x%2x %3d = 0x%2x ->", v0, v0, v1, v1);
                →printf("sbb_clear simu=(%3d,%s,%s) ", (unsigned int)(v10 & 0xFF), v10 & 0x10000 ? &gvar_804A012: &gvar_804A00F, v10 & 0x1000000 ? &gvar_804A00C: &gvar_804A00F);
                →printf("sbb_clear=(%3d,%s,%s)\n", (unsigned int)(v3 & 0xFF), v3 & 0x10000 ? &gvar_804A012: &gvar_804A00F, v3 & 0x1000000 ? &gvar_804A00C: &gvar_804A00F);
            }
            if(v9 != v7) {
                →printf("x=(%3d/0x%2x)   y=(%3d/0x%2x) ->", v0, v0, v1, v1);
                →printf("sub=(%3d,%s,%s) ", (unsigned int)(v2 & 0xFF), v2 & 0x10000 ? &gvar_804A012: &gvar_804A00F, v2 & 0x1000000 ? &gvar_804A00C: &gvar_804A00F);
                →printf("sbb_set=(%3d,%s,%s) ", (unsigned int)(v7 & 0xFF), v7 & 0x10000 ? &gvar_804A012: &gvar_804A00F, v7 & 0x1000000 ? &gvar_804A00C: &gvar_804A00F);
                →printf("sbb_set simu=(%3d,%s,%s)\n", (unsigned int)(v9 & 0xFF), v9 & 0x10000 ? &gvar_804A012: &gvar_804A00F, v9 & 0x1000000 ? &gvar_804A00C: &gvar_804A00F);
            }
            ++v1;
        }
        while(v1 != 0x100);
        ++v0;
    }
    while(v0 != 0x100);
    return 0;
}

int sbb_clear(unsigned char param0, unsigned char param1) {
    unsigned char v0 = param0 - param1;
    return ((unsigned int)((char)((v0 ^ param0) & (param0 ^ param1)) < 0 ? 1: 0) | ((unsigned int)(param0 < param1 ? 1: 0) << 8) | ((unsigned int)0 << 16)) * 0x10000 + (unsigned int)v0;
}

int sbb_set(unsigned char param0, unsigned char param1) {
    char v0 = param0 - (param1 + 1);
    return ((unsigned int)(((v0 ^ param0) & (param0 ^ param1)) < 0 ? 1: 0) | ((unsigned int)(param0 < param1 ? 1: 0) << 8) | ((unsigned int)0 << 16)) * 0x10000 + (unsigned int)v0;
}

int sbb_simu(int param0, unsigned char param1, int param2) {
    int v0;
    int v1 = (unsigned int)((unsigned char)param0 - param1) | ((unsigned int)((param0 >>> 8) & 0xffffff) << 8);
    int v2 = v1 - param2;
    int v3 = (unsigned char)(((unsigned int)((unsigned char)v1 >>> 7) ^ ((unsigned int)((unsigned char)v2 >>> 7) | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8))) & ((unsigned int)((unsigned char)v2 >>> 7 == (unsigned char)param2 >>> 7 ? 1: 0) | ((unsigned int)((param2 >>> 8) & 0xffffff) << 8))) == (unsigned char)(((unsigned int)((unsigned char)v1 >>> 7) ^ ((unsigned int)((unsigned char)param0 >>> 7) | ((unsigned int)((param0 >>> 8) & 0xffffff) << 8))) & ((unsigned char)v1 >>> 7 == param1 >>> 7 ? 1: 0)) ? (unsigned int)(unsigned char)v2: (unsigned int)(unsigned char)v2 + 0x10000;
    return (unsigned char)((unsigned int)((unsigned char)param0 < param1 ? 1: 0) | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8)) | ((unsigned char)v1 < (unsigned char)param2 ? 1: 0) ? v3 + 0x1000000: v3;
}

int signed_borrow(int param0, int param1) {
    return (((unsigned int)(((unsigned char)param0 - (unsigned char)param1) >>> 7) | ((unsigned int)(((param0 - param1) >>> 8) & 0xffffff) << 8)) ^ ((unsigned int)((unsigned char)param0 >>> 7) | ((unsigned int)((param0 >>> 8) & 0xffffff) << 8))) & (((unsigned char)param0 - (unsigned char)param1) >>> 7 == (unsigned char)param1 >>> 7 ? 1: 0);
}

int sub(unsigned char param0, unsigned char param1) {
    unsigned char v0 = param0 - param1;
    return ((unsigned int)((char)((v0 ^ param0) & (param0 ^ param1)) < 0 ? 1: 0) | ((unsigned int)(param0 < param1 ? 1: 0) << 8) | ((unsigned int)0 << 16)) * 0x10000 + (unsigned int)v0;
}

void sub_8049030() {
    jump gvar_804C008;
}

void sub_8049327() {
}
