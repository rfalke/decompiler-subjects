
void __i686.get_pc_thunk.bx() {
}

int dumpline(int param0, int param1, int param2) {
    int v0;
    int v1;
    char v2;
    int v3 = param0;
    int v4 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v5 = param1;
    int v6 = "%08lX:";
    int* ptr0 = (int*)0x50;
    int v7 = 1;
    int* ptr1 = (int*)((char*)&v1 + 1);
    →__sprintf_chk();
    int v8 = param2;
    if(v8 > 16) {
        v8 = 16;
    }
    int v9 = 1;
    if(v8 > 0) {
        v9 = 0;
        v0 = v8;
        int* ptr2 = &v2;
        do {
            v5 = (unsigned int)*(char*)(v3 + v9);
            v6 = " %02lX";
            ptr0 = (int*)0xFFFFFFFF;
            v7 = 1;
            ptr1 = ptr2;
            →__sprintf_chk();
            ++v9;
            ptr2 = (int*)((char*)ptr2 + 3);
        }
        while(v9 < v0);
        v8 = v0;
        if(v8 <= 15) {
            v9 = v8 + 1;
            goto loc_80486AC;
        }
        else {
            char* ptr3 = (char*)((char*)&v1 + 1);
            int v10 = -1;
            while(v10 != 0) {
                char v11 = *ptr3 == 0;
                ++ptr3;
                --v10;
                if(!~v11) {
                    break;
                }
            }
            *(int*)(~v10 + (int)&v1) = 0x7c2020;
            v0 = ~v10 + 2;
            goto loc_804870A;
        }
    }
    else {
    loc_80486AC:
        do {
            ptr0 = (int*)0x50;
            v7 = &gvar_80489AE;
            ptr1 = (int*)((char*)&v1 + 1);
            →__strcat_chk();
            ++v9;
        }
        while(v9 - 1 <= 15);
        char* ptr4 = (char*)((char*)&v1 + 1);
        int v12 = -1;
        while(v12 != 0) {
            char v13 = *ptr4 == 0;
            ++ptr4;
            --v12;
            if(!~v13) {
                break;
            }
        }
        *(int*)(~v12 + (int)&v1) = 0x7c2020;
        v0 = ~v12 + 2;
        if(v8 <= 0) {
            v8 = 0;
        }
        else {
        loc_804870A:
            char* ptr5 = (char*)((char*)((int)&v1 + v0) + 1);
            int v14 = 0;
            do {
                int v15 = (unsigned int)*(char*)(v14 + v3);
                if((unsigned char)((unsigned char)v15 + 224) > 94) {
                    v15 = 46;
                }
                *ptr5 = (unsigned char)v15;
                ++v14;
                ++ptr5;
            }
            while(v14 != v8);
            if(v8 > 15) {
                goto loc_804874D;
            }
        }
        char* ptr6 = (char*)((int)(int*)(v8 + (int)&v1) + (v0 + 1));
        do {
            *ptr6 = 32;
            ++v8;
            ++ptr6;
        }
        while(v8 <= 15);
    }
loc_804874D:
    *(short*)((int)(int*)(v8 + (int)&v1) + (v0 + 1)) = 124;
    →__printf_chk();
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v4;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int hexdump(char* __filename) {
    int result;
    char v0;
    unsigned int v1;
    char v2;
    int v3 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v4 = →__xstat(3, __filename, &v0);
    if(v4) {
        →perror(__filename);
        result = 1;
    }
    else {
        FILE* ptr0 = →fopen(__filename, (char*)&gvar_80489B6);
        FILE* __stream = ptr0;
        if(ptr0) {
            int v5 = 0;
            if(v1) {
                do {
                    size_t v6 = →fread(&v2, 1, 16, __stream);
                    if(!v6) {
                        break;
                    }
                    else {
                        dumpline((int)&v2, v5, (int)v6);
                        v5 = (int)(v6 + v5);
                    }
                }
                while((unsigned int)v5 < v1);
            }
            →fclose(__stream);
            result = 0;
        }
        else {
            →perror(__filename);
            result = 1;
        }
    }
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v3)) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int main(int param0, int param1) {
    int v0 = 1;
    int result = 0;
    if(param0 > 1) {
        do {
            int v1 = hexdump(*(char**)(v0 * 4 + param1));
            result += v1;
            ++v0;
        }
        while(v0 < param0);
    }
    return result;
}

void sub_8048480() {
    jump gvar_8049FFC;
}
