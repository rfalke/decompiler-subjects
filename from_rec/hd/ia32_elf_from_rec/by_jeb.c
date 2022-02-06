
int dumpline(int param0, int param1, unsigned int param2) {
    char v0;
    int v1;
    int v2 = v1;
    →sprintf(&v0, "%08lX:", param1);
    if((int)param2 > 16) {
        param2 = 16;
    }
    unsigned int i;
    for(i = 0; (int)i < (int)param2; ++i) {
        int v3 = (unsigned int)*(char*)(i + param0);
        →sprintf((char*)((int)(int*)(i * 2 + (int)&v0) + (i + 9)), " %02lX");
    }
    while(1) {
        unsigned int v4 = i;
        ++i;
        if((int)v4 > 15) {
            break;
        }
        else {
            →strcat(&v0, (char*)&gvar_80489D6);
        }
    }
    size_t v5 = →strlen(&v0);
    →strcpy((char*)((int)&v0 + v5), (char*)&gvar_80489DA);
    for(i = 0; (int)i < (int)param2; ++i) {
        unsigned int v6 = (unsigned int)(v5 + i);
        unsigned char* ptr0 = (unsigned char*)(i + param0);
        if(*ptr0 > 31) {
            ptr0 = (unsigned char*)(i + param0);
            if(*ptr0 > 126) {
                goto loc_8048770;
            }
            else {
                ptr0 = (unsigned int)*(char*)(i + param0) | ((unsigned int)(int*)((int)(int*)((int)ptr0 >>> 8) & 0xffffff) << 8);
            }
        }
        else {
        loc_8048770:
            ptr0 = (unsigned int)46 | ((unsigned int)(int*)((int)(int*)((int)ptr0 >>> 8) & 0xffffff) << 8);
        }
        *(char*)(v6 + (int)&v0) = (char)ptr0;
    }
    while((int)i <= 15) {
        *(char*)((int)(int*)((int)&v0 + v5) + i) = ' ';
        ++i;
    }
    →strcpy((char*)((int)(int*)((int)&v0 + v5) + i), (char*)&gvar_80489DE);
    return →printf((char*)&gvar_80489E0, &v0);
}

void fini_dummy() {
}

int hexdump(char* __file) {
    int result;
    char v0;
    unsigned int v1;
    char v2;
    int v3 = stat(__file, &v0);
    if(!v3) {
        →perror(__file);
        result = 1;
    }
    else {
        FILE* __stream = →fopen(__file, (char*)&gvar_80489E4);
        if(!__stream) {
            →perror(__file);
            result = 1;
        }
        else {
            int v4 = 0;
            while(v1 > (unsigned int)v4) {
                size_t v5 = →fread(&v2, 1, 16, __stream);
                if(!v5) {
                    break;
                }
                else {
                    dumpline((int)&v2, v4, v5);
                    v4 = (int)(v5 + v4);
                }
            }
            →fclose(__stream);
            result = 0;
        }
    }
    return result;
}

void init_dummy() {
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
    return →_xstat();
}

int sub_80484AE() {
    return gvar_8049A04();
}
