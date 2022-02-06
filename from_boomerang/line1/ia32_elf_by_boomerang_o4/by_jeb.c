
void __i686.get_pc_thunk.bx() {
}

char* chomp(char* __s, int __n, FILE* __stream) {
    int v0;
    int v1 = v0;
    char* __s1 = →fgets(__s, __n, __stream);
    if(__s1) {
        char* ptr0 = →strchr(__s1, 10);
        if(ptr0) {
            ptr0[0] = 0;
        }
    }
    return __s1;
}

int main(unsigned int param0, int param1) {
    int result;
    char v0;
    int v1;
    int v2 = v1;
    if((int)param0 > 1) {
        int v3 = &gvar_8048654;
        FILE* __stream = →fopen(*(char**)(param1 + 4), (char*)&gvar_8048654);
        result = 1;
        if(__stream) {
            char* __s = →fgets(&v0, 0x400, __stream);
            if(__s) {
                char* ptr0 = →strchr(__s, 10);
                if(ptr0) {
                    ptr0[0] = 0;
                }
                →puts(&v0);
            }
            result = →fclose(__stream);
        }
    }
    else {
        result = 1;
    }
    return result;
}

int sub_8048316() {
    return gvar_804974C();
}
