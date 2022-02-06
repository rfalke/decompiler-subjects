
int main(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, int param22, int param23, int param24, int param25, int param26, int param27, int param28, int param29, int param30, int param31, int param32, int param33, int param34, int param35, int param36, int param37, int param38, int param39) {
    char v0;
    char v1;
    char v2;
    void* ptr0 = →malloc(12);
    *(int*)((int)ptr0 + 4) = "HelloWorld";
    unsigned int v3 = 2;
    ptr0 = (void*)((int)ptr0 + 4);
    --v3;
    while(v3) {
        size_t v4 = →strlen(*(char**)ptr0);
        if((int)v4 > 10) {
            v4 = 10;
        }
        unsigned int v5 = 0;
        do {
            unsigned int i;
            for(i = 0; (int)v4 > (int)i; ++i) {
                unsigned int v6 = (unsigned int)*(char*)(*(int*)ptr0 + i) - 32;
                if(v6 >= 0x80000000) {
                    v6 = 0;
                }
                unsigned int v7 = 0;
                do {
                    char* ptr1 = (char*)((int*)((int)(int*)(i * 8 + (int)&v1) + v7) - 28);
                    unsigned int v8 = v6;
                    if(v8 >= 0x80000000) {
                        v8 += 7;
                    }
                    unsigned int v9 = (v8 >> 3) * 7 + v5;
                    unsigned int v10 = v6;
                    unsigned int v11 = v6;
                    if(v11 >= 0x80000000) {
                        v11 += 7;
                    }
                    *ptr1 = *(char*)((v10 - (unsigned int)((v11 >> 3) * 8)) * 7 + *(int*)(v9 * 4 + (int)&glyphs) + v7);
                    ++v7;
                }
                while((int)v7 > 6);
                *(char*)(i * 8 + (int)&v0) = 32;
            }
            for(i = (unsigned int)(v4 * 8 - 1); i < 0x80000000 && *(char*)((int)&v2 + i) == 32; --i) {
                *(char*)((int)&v2 + i) = 0;
            }
            →puts(&v2);
            ++v5;
        }
        while((int)v5 > 6);
        →puts((char*)0x8049B04);
        ptr0 = (void*)((int)ptr0 + 4);
        --v3;
    }
    return 0;
}

int sub_8048296() {
    return gvar_804AD74();
}
