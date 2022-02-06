
char adc_clear(char param0, char param1) {
    char v0 = param0 + param1;
    int v1 = ((v0 ^ param0) & ~(param0 ^ param1)) >= 0 ? 0: 1;
    return (char)(((unsigned int)(unsigned char)v1 | ((unsigned int)(__carry__(param0, param1) ? 1: 0) << 8) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16)) * 0x10000 + (unsigned int)v0);
}

char adc_set(char param0, char param1) {
    char v0 = param0 + param1 + 1;
    int v1 = ((v0 ^ param0) & ~(param0 ^ param1)) >= 0 ? 0: 1;
    return (char)(((unsigned int)(unsigned char)v1 | ((unsigned int)(__carry__(param0, param1) ? 1: 0) << 8) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16)) * 0x10000 + (unsigned int)v0);
}

char adc_simu(int param0, char param1, char param2) {
    char v0 = (unsigned int)((unsigned char)param0 + param1 + param2);
    return (unsigned char)((unsigned char)((((unsigned int)(((unsigned char)param0 + param1 + param2) >>> 7) | ((unsigned int)((unsigned int)((param0 >>> 8) & 0xffffff) & 0xffffff) << 8)) ^ ((unsigned int)((unsigned char)((unsigned int)((unsigned char)param0 + param1) | ((unsigned int)((param0 >>> 8) & 0xffffff) << 8)) >>> 7) | ((unsigned int)((unsigned int)((param0 >>> 8) & 0xffffff) & 0xffffff) << 8))) & ((unsigned char)((unsigned int)((unsigned char)param0 + param1) | ((unsigned int)((param0 >>> 8) & 0xffffff) << 8)) >>> 7 != param2 >>> 7 ? 0: 1)) != (unsigned char)((((unsigned int)((unsigned char)((unsigned int)((unsigned char)param0 + param1) | ((unsigned int)((param0 >>> 8) & 0xffffff) << 8)) >>> 7) | ((unsigned int)((unsigned int)((param0 >>> 8) & 0xffffff) & 0xffffff) << 8)) ^ ((unsigned int)((unsigned char)param0 >>> 7) | ((unsigned int)((param0 >>> 8) & 0xffffff) << 8))) & ((unsigned char)param0 >>> 7 != param1 >>> 7 ? 0: 1)) ? v0 + 0x10000: v0);
}

int carry(int param0, char param1) {
    return (unsigned char)((unsigned char)param0 + param1) >= (unsigned char)param0 ? 0: 1;
}

int main() {
    int v0;
    int v1;
    char v2;
    char v3;
    char v4;
    char v5;
    char v6;
    char v7;
    int v8;
    int v9 = v1;
    unsigned int v10 = 0;
    int v11 = v8;
    int* ptr0 = &v5;
    do {
        unsigned int v12 = 0;
        do {
            *(unsigned int*)&v6 = v12;
            *(unsigned int*)&v2 = v10;
            int v13 = add(*(int*)&v2, *(int*)&v6);
            *(int*)&v7 = v13;
            *(unsigned int*)&v6 = v12;
            *(unsigned int*)&v2 = v10;
            char v14 = adc_clear(v2, v6);
            *(unsigned int*)&v6 = v12;
            *(unsigned int*)&v2 = v10;
            char v15 = adc_set(v2, v6);
            *(int*)&v3 = 1;
            *(unsigned int*)&v6 = v12;
            *(unsigned int*)&v2 = v10;
            char v16 = v15;
            char v17 = adc_simu(*(int*)&v2, v6, 1);
            *(int*)&v3 = 0;
            *(unsigned int*)&v6 = v12;
            *(unsigned int*)&v2 = v10;
            char v18 = v17;
            char v19 = adc_simu(*(int*)&v2, v6, 0);
            *(char*)&v4 = v19;
            if(*(int*)&v7 != v14) {
                *(unsigned int*)&v2 = v12;
                →printf("%3d = 0x%2x %3d = 0x%2x ->");
                int v20 = *(int*)&v7;
                v0 = v20 & 0x1000000 ? &gvar_804A00C: &gvar_804A00F;
                *(int*)&v3 = v20 & 0x10000 ? &gvar_804A012: &gvar_804A00F;
                *(int*)&v6 = (unsigned int)v7;
                *(int*)&v2 = "add=(%3d,%s,%s) ";
                →printf(*(int*)&v2);
                v0 = v14 & 0x1000000 ? &gvar_804A00C: &gvar_804A00F;
                *(int*)&v3 = v14 & 0x10000 ? &gvar_804A012: &gvar_804A00F;
                *(int*)&v6 = (unsigned int)(unsigned char)v14;
                *(int*)&v2 = "adc_clear=(%3d,%s,%s)\n";
                →printf(*(int*)&v2);
            }
            if(*(int*)&v4 != v14) {
                *(unsigned int*)&v2 = v12;
                →printf("x=(%3d/0x%2x)   y=(%3d/0x%2x) ->");
                int v21 = *(int*)&v4;
                v0 = v21 & 0x1000000 ? &gvar_804A00C: &gvar_804A00F;
                *(int*)&v3 = v21 & 0x10000 ? &gvar_804A012: &gvar_804A00F;
                *(int*)&v6 = (unsigned int)v4;
                *(int*)&v2 = "adc_clear simu=(%3d,%s,%s) ";
                →printf(*(int*)&v2);
                v0 = v14 & 0x1000000 ? &gvar_804A00C: &gvar_804A00F;
                *(int*)&v3 = v14 & 0x10000 ? &gvar_804A012: &gvar_804A00F;
                *(int*)&v6 = (unsigned int)(unsigned char)v14;
                *(int*)&v2 = "adc_clear=(%3d,%s,%s)\n";
                →printf(*(int*)&v2);
            }
            if(v18 != v16) {
                *(unsigned int*)&v2 = v12;
                →printf("x=(%3d/0x%2x)   y=(%3d/0x%2x) ->");
                int v22 = *(int*)&v7;
                v0 = v22 & 0x1000000 ? &gvar_804A00C: &gvar_804A00F;
                *(int*)&v3 = v22 & 0x10000 ? &gvar_804A012: &gvar_804A00F;
                *(int*)&v6 = (unsigned int)(unsigned char)v22;
                *(int*)&v2 = "add=(%3d,%s,%s) ";
                →printf(*(int*)&v2);
                v0 = v16 & 0x1000000 ? &gvar_804A00C: &gvar_804A00F;
                *(int*)&v3 = v16 & 0x10000 ? &gvar_804A012: &gvar_804A00F;
                *(int*)&v6 = (unsigned int)(unsigned char)v16;
                *(int*)&v2 = "adc_set=(%3d,%s,%s) ";
                →printf(*(int*)&v2);
                v0 = v18 & 0x1000000 ? &gvar_804A00C: &gvar_804A00F;
                *(int*)&v3 = v18 & 0x10000 ? &gvar_804A012: &gvar_804A00F;
                *(int*)&v6 = (unsigned int)(unsigned char)v18;
                *(int*)&v2 = "adc_set simu=(%3d,%s,%s)\n";
                →printf(*(int*)&v2);
            }
            ++v12;
        }
        while(v12 != 0x100);
        ++v10;
    }
    while(v10 != 0x100);
    return 0;
}

int signed_carry(int param0, int param1) {
    int v0 = param0 + param1;
    return (((unsigned int)((unsigned char)v0 >>> 7) | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8)) ^ ((unsigned int)((unsigned char)param0 >>> 7) | ((unsigned int)((param0 >>> 8) & 0xffffff) << 8))) & ((unsigned char)param0 >>> 7 != (unsigned char)param1 >>> 7 ? 0: 1);
}

int sub_8049036() {
    return gvar_804C008();
}

void sub_8049327() {
}

int sub_804935C() {
    return 0;
}

void sub_80493A8() {
}

int sub_80493DD() {
    int result = deregister_tm_clones();
    completed.6844 = 1;
    return result;
}

void sub_80493F8() {
}
