
int adc_clear(char param0, char param1) {
    char v0 = param0 + param1;
    return ((unsigned int)(((v0 ^ param0) & ~(param0 ^ param1)) < 0 ? 1: 0) | ((unsigned int)(__carry__(param0, param1) ? 1: 0) << 8) | ((unsigned int)0 << 16)) * 0x10000 + (unsigned int)v0;
}

int adc_set(char param0, char param1) {
    char v0 = param0 + param1 + 1;
    return ((unsigned int)(((v0 ^ param0) & ~(param0 ^ param1)) < 0 ? 1: 0) | ((unsigned int)(__carry__(param0, param1) ? 1: 0) << 8) | ((unsigned int)0 << 16)) * 0x10000 + (unsigned int)v0;
}

int adc_simu(int param0, char param1, char param2) {
    int v0;
    int v1 = (unsigned int)(unsigned char)((unsigned int)((unsigned char)((unsigned int)((unsigned char)param0 + param1) | ((unsigned int)((param0 >>> 8) & 0xffffff) << 8)) + param2) | ((unsigned int)((unsigned int)((param0 >>> 8) & 0xffffff) & 0xffffff) << 8));
    int v2 = (unsigned char)((((unsigned int)((unsigned char)((unsigned int)((unsigned char)((unsigned int)((unsigned char)param0 + param1) | ((unsigned int)((param0 >>> 8) & 0xffffff) << 8)) + param2) | ((unsigned int)((unsigned int)((param0 >>> 8) & 0xffffff) & 0xffffff) << 8)) >>> 7) | ((unsigned int)((unsigned int)((unsigned int)((param0 >>> 8) & 0xffffff) & 0xffffff) & 0xffffff) << 8)) ^ ((unsigned int)((unsigned char)((unsigned int)((unsigned char)param0 + param1) | ((unsigned int)((param0 >>> 8) & 0xffffff) << 8)) >>> 7) | ((unsigned int)((unsigned int)((param0 >>> 8) & 0xffffff) & 0xffffff) << 8))) & ((unsigned char)((unsigned int)((unsigned char)param0 + param1) | ((unsigned int)((param0 >>> 8) & 0xffffff) << 8)) >>> 7 == param2 >>> 7 ? 1: 0)) == (unsigned char)((((unsigned int)((unsigned char)((unsigned int)((unsigned char)param0 + param1) | ((unsigned int)((param0 >>> 8) & 0xffffff) << 8)) >>> 7) | ((unsigned int)((unsigned int)((param0 >>> 8) & 0xffffff) & 0xffffff) << 8)) ^ ((unsigned int)((unsigned char)param0 >>> 7) | ((unsigned int)((param0 >>> 8) & 0xffffff) << 8))) & ((unsigned char)param0 >>> 7 == param1 >>> 7 ? 1: 0)) ? v1: v1 + 0x10000;
    return __carry__((unsigned char)param0, param1) ? 1: ((unsigned int)(__carry__((unsigned char)((unsigned int)((unsigned char)param0 + param1) | ((unsigned int)((param0 >>> 8) & 0xffffff) << 8)), param2) ? 1: 0) | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8)) & 0x1 ? v2 + 0x1000000: v2;
}

int carry(int param0, char param1) {
    return (unsigned char)((unsigned char)param0 + param1) >= (unsigned char)param0 ? 0: 1;
}

int main() {
    int v0;
    char v1;
    int v2;
    int v3 = v0;
    int v4 = 0;
    int v5 = v2;
    int* ptr0 = &v1;
    do {
        int v6 = 0;
        do {
            int v7 = add(v4, v6);
            int v8 = adc_clear((char)v4, (char)v6);
            int v9 = adc_set((char)v4, (char)v6);
            int v10 = v6;
            int v11 = v4;
            int v12 = v9;
            int v13 = adc_simu(v11, (char)v10, 1);
            int v14 = 0;
            v10 = v6;
            v11 = v4;
            int v15 = v13;
            int v16 = adc_simu(v11, (char)v10, 0);
            if(v8 != v7) {
                →printf("%3d = 0x%2x %3d = 0x%2x ->", v4, v4, v6, v6);
                →printf("add=(%3d,%s,%s) ", (unsigned int)(v7 & 0xFF), v7 & 0x10000 ? &gvar_804A012: &gvar_804A00F, v7 & 0x1000000 ? &gvar_804A00C: &gvar_804A00F);
                →printf("adc_clear=(%3d,%s,%s)\n", (unsigned int)(v8 & 0xFF), v8 & 0x10000 ? &gvar_804A012: &gvar_804A00F, v8 & 0x1000000 ? &gvar_804A00C: &gvar_804A00F);
            }
            if(v8 != v16) {
                →printf("x=(%3d/0x%2x)   y=(%3d/0x%2x) ->", v4, v4, v6, v6);
                →printf("adc_clear simu=(%3d,%s,%s) ", (unsigned int)(v16 & 0xFF), v16 & 0x10000 ? &gvar_804A012: &gvar_804A00F, v16 & 0x1000000 ? &gvar_804A00C: &gvar_804A00F);
                →printf("adc_clear=(%3d,%s,%s)\n", (unsigned int)(v8 & 0xFF), v8 & 0x10000 ? &gvar_804A012: &gvar_804A00F, v8 & 0x1000000 ? &gvar_804A00C: &gvar_804A00F);
            }
            if(v15 != v12) {
                →printf("x=(%3d/0x%2x)   y=(%3d/0x%2x) ->", v4, v4, v6, v6);
                →printf("add=(%3d,%s,%s) ", (unsigned int)(v7 & 0xFF), v7 & 0x10000 ? &gvar_804A012: &gvar_804A00F, v7 & 0x1000000 ? &gvar_804A00C: &gvar_804A00F);
                →printf("adc_set=(%3d,%s,%s) ", (unsigned int)(v12 & 0xFF), v12 & 0x10000 ? &gvar_804A012: &gvar_804A00F, v12 & 0x1000000 ? &gvar_804A00C: &gvar_804A00F);
                →printf("adc_set simu=(%3d,%s,%s)\n", (unsigned int)(v15 & 0xFF), v15 & 0x10000 ? &gvar_804A012: &gvar_804A00F, v15 & 0x1000000 ? &gvar_804A00C: &gvar_804A00F);
            }
            ++v6;
        }
        while(v6 != 0x100);
        ++v4;
    }
    while(v4 != 0x100);
    return 0;
}

int signed_carry(int param0, int param1) {
    int v0 = param0 + param1;
    return (((unsigned int)((unsigned char)v0 >>> 7) | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8)) ^ ((unsigned int)((unsigned char)param0 >>> 7) | ((unsigned int)((param0 >>> 8) & 0xffffff) << 8))) & ((unsigned char)param0 >>> 7 == (unsigned char)param1 >>> 7 ? 1: 0);
}

void sub_8049030() {
    jump gvar_804C008;
}

void sub_8049327() {
}
