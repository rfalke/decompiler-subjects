
int start(int param0, int param1, int param2) {
    int v0;
    unsigned short* ptr0;
    int v1;
    char v2;
    unsigned int v3;
    int v4;
    char v5;
    int v6 = v4;
    unsigned int* ptr1 = &param0;
    int v7 = v6;
    int v8 = v6 - 1;
    char v9 = v8 ? 0: 1;
    char v10 = v8 < 0;
    char v11 = __parity__((unsigned char)v8);
    char v12 = ((~v8 ^ ~v7) >>> 4) & 0x1;
    char v13 = ((v8 ^ v7) & v7) < 0;
    if(!v9) {
        v3 = 0;
        char v14 = 1;
        char v15 = 0;
        char v16 = 1;
        char v17 = 0;
        char v18 = 0;
        int v19 = param0;
        ptr1 = &param1;
        gvar_80495E5 = 9;
        do {
            unsigned short* ptr2 = *ptr1;
            ++ptr1;
            char v20 = *ptr2 == 25645;
            char v21 = *ptr2 < 25645;
            char v22 = __parity__((unsigned char)*ptr2 - 45);
            v2 = *ptr2 < 25645;
            char v23 = (((*ptr2 - 25645) ^ *ptr2) & (*ptr2 ^ 0x642d)) < 0;
            v12 = (((*ptr2 - 25645) ^ (*ptr2 ^ 0x642d)) >>> 4) & 0x1;
            if(!v20) {
                v1 = 0;
                v9 = 1;
                v10 = 0;
                v11 = 1;
                v13 = 0;
                v2 = 0;
                ptr0 = ptr2;
                --ptr1;
                *ptr1 = 5;
                v0 = *ptr1;
                ++ptr1;
                interrupt(128);
                goto loc_804808F;
            }
            else {
                v7 = v8;
                --v8;
                v9 = v8 ? 0: 1;
                v10 = v8 < 0;
                v11 = __parity__((unsigned char)v8);
                v12 = ((~v8 ^ ~v7) >>> 4) & 0x1;
                v13 = ((v8 ^ v7) & v7) < 0;
                if(v9) {
                    goto loc_804808F;
                }
                else {
                    ptr2 = *ptr1;
                    ++ptr1;
                    char v24 = *(char*)ptr2;
                    gvar_80495E5 = *(unsigned char*)ptr2;
                    v7 = v8;
                    --v8;
                    v5 = v8 ? 0: 1;
                    char v25 = v8 < 0;
                    char v26 = __parity__((unsigned char)v8);
                    v12 = ((~v8 ^ ~v7) >>> 4) & 0x1;
                    char v27 = ((v8 ^ v7) & v7) < 0;
                }
            }
        }
        while(!v5);
        v9 = 1;
        v10 = 0;
        v11 = 1;
        v13 = 0;
        v2 = 0;
    }
loc_804808F:
    v1 = "paste [-d delim] file file [file ...]\n";
    v3 = gvar_80481B9;
    unsigned int v28 = gvar_80481B9;
    --ptr1;
    *ptr1 = 2;
    ptr0 = *ptr1;
    *ptr1 = 4;
    v0 = *ptr1;
    ++ptr1;
    interrupt(128);
}

char sub_8048156() {
    unsigned char v0;
    unsigned int v1 = gvar_80495DC;
    *(unsigned char*)((int)&gvar_80481DC + v1) = v0;
    unsigned int v2 = v1 + 1;
    char v3 = v2 == 0x400;
    char v4 = (int)v2 < 0x400;
    char v5 = __parity__((unsigned char)v2);
    char v6 = v2 < 0x400;
    char v7 = (((v2 - 0x400) ^ v2) & (v2 ^ 0x400)) < 0;
    char v8 = (((v2 - 0x400) ^ (v2 ^ 0x400)) >>> 4) & 0x1;
    jump v3 ? &sub_8048178: &sub_804816B;
}

void sub_804816B() {
    unsigned int v0;
    gvar_80495DC = v0;
}

void sub_8048172() {
}

int sub_8048178() {
    char v0;
    int v1;
    int v2 = &gvar_80481DC;
    int v3 = v1;
    int v4 = &gvar_80481DC;
    int v5 = 1;
    int v6 = 4;
    int v7 = 4;
    int* ptr0 = &v0;
    interrupt(128);
}
