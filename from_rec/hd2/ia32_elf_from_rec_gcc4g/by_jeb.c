
void __i686.get_pc_thunk.bx() {
}

int dumpline(int param0, int param1, int param2) {
    char v0;
    char v1;
    int v2 = param0;
    int v3 = *(int*)(__GS_BASE + (int)(int*)0x14);
    →sprintf(&v0, "%08lX:", param1);
    if(param2 > 16) {
        param2 = 16;
    }
    char* j = NULL;
    char* i;
    for(i = j; (int)i < param2; i = j) {
        int v4 = (unsigned int)j[v2];
        →sprintf((char*)((int)(int*)((int)j * 3) + (int)&v1), " %02lX");
        ++j;
    }
    while(1) {
        i = (unsigned int)((int)j <= 15 ? 1: 0) | ((unsigned int)(int*)((int)(int*)((int)i >>> 8) & 0xffffff) << 8);
        ++j;
        if(!(unsigned char)i) {
            break;
        }
        else {
            i = →strcat(&v0, (char*)&gvar_8048A2E);
        }
    }
    size_t v5 = →strlen(&v0);
    →memcpy((void*)((int)&v0 + v5), (void*)&gvar_8048A32, 4);
    v5 += 3;
    for(j = NULL; (int)j < param2; ++j) {
        *(char*)((int)(int*)((int)&v0 + v5) + (int)j) = (char)((unsigned char)j[v2] > 31 && (unsigned char)j[v2] <= 126 ? (unsigned int)j[v2]: 46);
    }
    while((int)j <= 15) {
        *(char*)((int)(int*)((int)&v0 + v5) + (int)j) = ' ';
        ++j;
    }
    →memcpy((void*)((int)(int*)((int)&v0 + v5) + (int)j), (void*)&gvar_8048A36, 2);
    →puts(&v0);
    int result = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v3;
    if(result) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
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
        →perror(__file);
        result = 1;
    }
    else {
        FILE* __stream = →fopen(__file, (char*)&gvar_8048A38);
        if(!__stream) {
            →perror(__file);
            result = 1;
        }
        else {
            int v5 = 0;
            while(v1 > (unsigned int)v5) {
                int v6 = (int)→fread(&v2, 1, 16, __stream);
                if(!v6) {
                    break;
                }
                else {
                    dumpline((int)&v2, v5, v6);
                    v5 += v6;
                }
            }
            →fclose(__stream);
            result = 0;
        }
    }
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v3)) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int main(int param0, int param1) {
    int result = 0;
    for(int i = 1; i < param0; ++i) {
        int v0 = hexdump(*(char**)(i * 4 + param1));
        result += v0;
    }
    return result;
}

int stat(char* __file, stat* __buf) {
    return →__xstat(3, __file, __buf);
}

void sub_8048498() {
    jump gvar_8049FFC;
}
