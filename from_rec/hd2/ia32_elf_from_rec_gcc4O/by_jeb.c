
void __i686.get_pc_thunk.bx() {
}

int dumpline(int param0, int param1, unsigned int param2) {
    char v0;
    char v1;
    unsigned int v2;
    short v3;
    char v4;
    char v5;
    int v6;
    int v7 = v6;
    int v8 = param0;
    int v9 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v10 = param1;
    int v11 = "%08lX:";
    unsigned short* ptr0 = (unsigned short*)0x50;
    int v12 = 1;
    unsigned short* ptr1 = &v3;
    →__sprintf_chk();
    unsigned int v13 = param2;
    if((int)v13 > 16) {
        v13 = 16;
    }
    unsigned int v14 = 1;
    if((int)v13 > 0) {
        v14 = 0;
        v2 = v13;
        unsigned short* ptr2 = &v5;
        do {
            v10 = (unsigned int)*(char*)(v8 + v14);
            v11 = " %02lX";
            ptr0 = (unsigned short*)0xFFFFFFFF;
            v12 = 1;
            ptr1 = ptr2;
            →__sprintf_chk();
            ++v14;
            ptr2 = (unsigned short*)((char*)ptr2 + 3);
        }
        while((int)v14 < (int)v2);
        v13 = v2;
        if((int)v13 <= 15) {
            v14 = v13 + 1;
            goto loc_80486AC;
        }
        else {
            unsigned short* ptr3 = &v3;
            int v15 = -1;
            do {
                v1 = *(char*)ptr3 == 0;
                ptr3 = (unsigned short*)((char*)ptr3 + 1);
                --v15;
            }
            while(~v1 && v15 == 0);
            *(int*)(~v15 + (int)&v4) = 0x7c2020;
            v2 = (unsigned int)(1 - v15);
            goto loc_804870A;
        }
    }
    else {
    loc_80486AC:
        do {
            ptr0 = (unsigned short*)0x50;
            v12 = &gvar_80489AE;
            ptr1 = &v3;
            →__strcat_chk();
            ++v14;
        }
        while((int)(v14 - 1) <= 15);
        unsigned short* ptr4 = &v3;
        int v16 = -1;
        do {
            v0 = *(char*)ptr4 == 0;
            ptr4 = (unsigned short*)((char*)ptr4 + 1);
            --v16;
        }
        while(~v0 && v16 == 0);
        *(int*)(~v16 + (int)&v4) = 0x7c2020;
        v2 = (unsigned int)(1 - v16);
        if((int)v13 <= 0) {
            v13 = 0;
        }
        else {
        loc_804870A:
            char* ptr5 = (char*)((int)&v3 + v2);
            unsigned int v17 = 0;
            do {
                char v18 = *(char*)(v17 + v8);
                if((unsigned char)(v18 + 224) > 94) {
                    v18 = 46;
                }
                *ptr5 = v18;
                ++v17;
                ++ptr5;
            }
            while(v17 != v13);
            if((int)v13 > 15) {
                goto loc_804874D;
            }
        }
        char* ptr6 = (char*)((int)(int*)(v13 + (int)&v3) + v2);
        do {
            *ptr6 = 32;
            ++v13;
            ++ptr6;
        }
        while((int)v13 <= 15);
    }
loc_804874D:
    *(short*)((int)(int*)(v13 + (int)&v3) + v2) = 124;
    →__printf_chk();
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v9;
    if(result) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

unsigned int hexdump(int param0) {
    char v0;
    unsigned int v1;
    char v2;
    unsigned int result;
    int v3;
    int v4 = v3;
    int v5 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →__xstat(3, param0, &v0);
    if(result) {
        →perror(param0);
        result = 1;
    }
    else {
        →fopen(param0, &gvar_80489B6);
        unsigned int v6 = result;
        if(result) {
            int v7 = 0;
            if(v1) {
                do {
                    →fread(&v2, 1, 16, (int)v6);
                    if(!result) {
                        break;
                    }
                    else {
                        dumpline(&v2, v7, result);
                        v7 = (int)(result + v7);
                    }
                }
                while((unsigned int)v7 < v1);
            }
            →fclose((int)v6);
            result = 0;
        }
        else {
            →perror(param0);
            result = 1;
        }
    }
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v5)) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int main(unsigned int param0, int param1) {
    int v0;
    int v1 = v0;
    unsigned int v2 = 1;
    int result = 0;
    if((int)param0 > 1) {
        do {
            unsigned int v3 = hexdump(*(int*)(v2 * 4 + param1));
            result += v3;
            ++v2;
        }
        while((int)v2 < (int)param0);
    }
    return result;
}

int sub_8048486() {
    return gvar_8049FFC();
}
