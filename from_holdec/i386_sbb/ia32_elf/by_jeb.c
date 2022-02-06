
int main() {
    int v0;
    int v1;
    int v2;
    unsigned char v3;
    char v4;
    char v5;
    unsigned char v6;
    char v7;
    int v8;
    int v9 = v2;
    unsigned int v10 = 0;
    int v11 = v8;
    int* ptr0 = &v5;
    do {
        unsigned int v12 = 0;
        do {
            *(unsigned int*)&v6 = v12;
            *(unsigned int*)&v3 = v10;
            char v13 = sub(v3, v6);
            *(char*)&v7 = v13;
            *(unsigned int*)&v6 = v12;
            *(unsigned int*)&v3 = v10;
            char v14 = sbb_clear(v3, v6);
            *(unsigned int*)&v6 = v12;
            *(unsigned int*)&v3 = v10;
            char v15 = sbb_set(v3, v6);
            *(unsigned int*)&v6 = v12;
            *(unsigned int*)&v3 = v10;
            char v16 = v15;
            int v17 = sbb_simu(*(int*)&v3, v6, 1);
            *(unsigned int*)&v6 = v12;
            *(unsigned int*)&v3 = v10;
            int v18 = v17;
            int v19 = sbb_simu(*(int*)&v3, v6, 0);
            *(int*)&v4 = v19;
            if(*(int*)&v7 != v14) {
                *(unsigned int*)&v3 = v12;
                →printf("%3d = 0x%2x %3d = 0x%2x ->");
                int v20 = *(int*)&v7;
                v1 = v20 & 0x1000000 ? &gvar_804A00C: &gvar_804A00F;
                v0 = v20 & 0x10000 ? &gvar_804A012: &gvar_804A00F;
                *(int*)&v6 = (unsigned int)v7;
                *(int*)&v3 = "sub=(%3d,%s,%s) ";
                →printf(*(int*)&v3);
                v1 = v14 & 0x1000000 ? &gvar_804A00C: &gvar_804A00F;
                v0 = v14 & 0x10000 ? &gvar_804A012: &gvar_804A00F;
                *(int*)&v6 = (unsigned int)(unsigned char)v14;
                *(int*)&v3 = "sbb_clear=(%3d,%s,%s)\n";
                →printf(*(int*)&v3);
            }
            if(*(int*)&v4 != v14) {
                *(unsigned int*)&v3 = v12;
                →printf("%3d = 0x%2x %3d = 0x%2x ->");
                int v21 = *(int*)&v4;
                v1 = v21 & 0x1000000 ? &gvar_804A00C: &gvar_804A00F;
                v0 = v21 & 0x10000 ? &gvar_804A012: &gvar_804A00F;
                *(int*)&v6 = (unsigned int)v4;
                *(int*)&v3 = "sbb_clear simu=(%3d,%s,%s) ";
                →printf(*(int*)&v3);
                v1 = v14 & 0x1000000 ? &gvar_804A00C: &gvar_804A00F;
                v0 = v14 & 0x10000 ? &gvar_804A012: &gvar_804A00F;
                *(int*)&v6 = (unsigned int)(unsigned char)v14;
                *(int*)&v3 = "sbb_clear=(%3d,%s,%s)\n";
                →printf(*(int*)&v3);
            }
            if(v18 != v16) {
                *(unsigned int*)&v3 = v12;
                →printf("x=(%3d/0x%2x)   y=(%3d/0x%2x) ->");
                int v22 = *(int*)&v7;
                v1 = v22 & 0x1000000 ? &gvar_804A00C: &gvar_804A00F;
                v0 = v22 & 0x10000 ? &gvar_804A012: &gvar_804A00F;
                *(int*)&v6 = (unsigned int)(unsigned char)v22;
                *(int*)&v3 = "sub=(%3d,%s,%s) ";
                →printf(*(int*)&v3);
                v1 = v16 & 0x1000000 ? &gvar_804A00C: &gvar_804A00F;
                v0 = v16 & 0x10000 ? &gvar_804A012: &gvar_804A00F;
                *(int*)&v6 = (unsigned int)(unsigned char)v16;
                *(int*)&v3 = "sbb_set=(%3d,%s,%s) ";
                →printf(*(int*)&v3);
                v1 = v18 & 0x1000000 ? &gvar_804A00C: &gvar_804A00F;
                v0 = v18 & 0x10000 ? &gvar_804A012: &gvar_804A00F;
                *(int*)&v6 = (unsigned int)(unsigned char)v18;
                *(int*)&v3 = "sbb_set simu=(%3d,%s,%s)\n";
                →printf(*(int*)&v3);
            }
            ++v12;
        }
        while(v12 != 0x100);
        ++v10;
    }
    while(v10 != 0x100);
    return 0;
}

char sbb_clear(unsigned char param0, unsigned char param1) {
    unsigned char v0 = param0 - param1;
    int v1 = (char)((v0 ^ param0) & (param0 ^ param1)) >= 0 ? 0: 1;
    return (char)(((unsigned int)(unsigned char)v1 | ((unsigned int)(param0 >= param1 ? 0: 1) << 8) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16)) * 0x10000 + (unsigned int)v0);
}

char sbb_set(unsigned char param0, unsigned char param1) {
    char v0 = param0 - (param1 + 1);
    int v1 = ((v0 ^ param0) & (param0 ^ param1)) >= 0 ? 0: 1;
    return (char)(((unsigned int)(unsigned char)v1 | ((unsigned int)(param0 >= param1 ? 0: 1) << 8) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16)) * 0x10000 + (unsigned int)v0);
}

int sbb_simu(int param0, unsigned char param1, unsigned int param2) {
    unsigned int v0 = (unsigned int)((unsigned char)param0 - param1) | ((unsigned int)((param0 >>> 8) & 0xffffff) << 8);
    unsigned int v1 = v0 - param2;
    int v2 = (unsigned char)(((unsigned int)((unsigned char)v0 >>> 7) ^ ((unsigned int)((unsigned char)v1 >>> 7) | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8))) & ((unsigned int)((unsigned char)v1 >>> 7 != (unsigned char)param2 >>> 7 ? 0: 1) | ((unsigned int)((param2 >>> 8) & 0xffffff) << 8))) != (unsigned char)(((unsigned int)((unsigned char)v0 >>> 7) ^ ((unsigned int)((unsigned char)param0 >>> 7) | ((unsigned int)((param0 >>> 8) & 0xffffff) << 8))) & ((unsigned char)v0 >>> 7 != param1 >>> 7 ? 0: 1)) ? (unsigned int)(unsigned char)v1 + 0x10000: (unsigned int)(unsigned char)v1;
    return ((unsigned char)v0 >= (unsigned char)param2 ? 0: 1) | ((unsigned char)param0 >= param1 ? 0: 1) ? v2 + 0x1000000: v2;
}

int signed_borrow(unsigned int param0, unsigned int param1) {
    unsigned int v0 = param0 - param1;
    return (((unsigned int)((unsigned char)v0 >>> 7) | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8)) ^ ((unsigned int)((unsigned char)param0 >>> 7) | ((unsigned int)((param0 >>> 8) & 0xffffff) << 8))) & ((unsigned char)v0 >>> 7 != (unsigned char)param1 >>> 7 ? 0: 1);
}

char sub(unsigned char param0, unsigned char param1) {
    unsigned char v0 = param0 - param1;
    int v1 = (char)((v0 ^ param0) & (param0 ^ param1)) >= 0 ? 0: 1;
    return (char)(((unsigned int)(unsigned char)v1 | ((unsigned int)(param0 >= param1 ? 0: 1) << 8) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16)) * 0x10000 + (unsigned int)v0);
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
