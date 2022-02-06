
void __i686.get_pc_thunk.bx() {
}

int dumpline(int param0, int param1, unsigned int param2) {
    char v0;
    int result;
    int v1;
    int v2 = v1;
    int v3 = param0;
    int v4 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v5 = param1;
    →sprintf(&v0, "%08lX:");
    if((int)param2 > 16) {
        param2 = 16;
    }
    unsigned int j = 0;
    unsigned int i;
    for(i = j; (int)i < (int)param2; i = j) {
        v5 = (unsigned int)*(char*)(v3 + j);
        →sprintf(j * 2 + &v0 + (j + 9), " %02lX");
        ++j;
    }
    while(1) {
        i = (unsigned int)((int)j > 15 ? 0: 1) | ((unsigned int)((i >>> 8) & 0xffffff) << 8);
        ++j;
        if(!(unsigned char)i) {
            break;
        }
        else {
            →strcat(&v0, &gvar_8048A2E);
        }
    }
    →strlen(&v0);
    →memcpy(&v0, &gvar_8048A32, 4);
    int v6 = result + 3;
    for(j = 0; (int)j < (int)param2; ++j) {
        *(char*)(&v0 + v6 + j) = *(unsigned char*)(v3 + j) <= 31 || *(unsigned char*)(v3 + j) > 126 ? 46: *(char*)(v3 + j);
    }
    while((int)j <= 15) {
        *(char*)(&v0 + v6 + j) = 32;
        ++j;
    }
    →memcpy(&v0 + v6 + j, &gvar_8048A36, 2);
    →puts(&v0);
    result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v4;
    if(result) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int hexdump(char* param0) {
    int result;
    char v0;
    unsigned int v1;
    char v2;
    char* __file = param0;
    int v3 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v4 = stat(__file, &v0);
    if(v4) {
        →perror((int)__file);
        result = 1;
    }
    else {
        →fopen((int)__file, &gvar_8048A38);
        int v5 = result;
        if(!v5) {
            →perror((int)__file);
            result = 1;
        }
        else {
            int v6 = 0;
            while(v1 > (unsigned int)v6) {
                →fread(&v2, 1, 16, v5);
                unsigned int v7 = (unsigned int)result;
                if(!v7) {
                    break;
                }
                else {
                    dumpline(&v2, v6, v7);
                    v6 = (int)(v7 + v6);
                }
            }
            →fclose(v5);
            result = 0;
        }
    }
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v3)) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int main(unsigned int param0, int param1) {
    int result = 0;
    for(unsigned int i = 1; (int)i < (int)param0; ++i) {
        int v0 = hexdump(*(char**)(i * 4 + param1));
        result += v0;
    }
    return result;
}

int stat(char* __file, stat* __buf) {
    int result;
    →__xstat(3, (int)__file, (int)__buf);
    return result;
}

int sub_804849E() {
    return gvar_8049FFC();
}
