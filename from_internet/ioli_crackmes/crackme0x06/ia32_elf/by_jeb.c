
void __i686.get_pc_thunk.bx() {
}

int check(char* __s, int param1) {
    int v0;
    int v1 = 0;
    unsigned int min = 0;
    for(size_t i = →strlen(__s); i > min; i = →strlen(__s)) {
        char v2 = __s[min];
        →sscanf(&v2, (char*)&gvar_804873D, &v0);
        v1 += v0;
        if(v1 == 16) {
            parell(__s, param1);
        }
        ++min;
    }
    return →printf("Password Incorrect!\n");
}

int dummy(int param0, int param1) {
    int v0 = 0;
    while(*(int*)(v0 * 4 + param1)) {
        int v1 = v0 * 4;
        ++v0;
        int v2 = →strncmp(*(char**)(v1 + param1), "LOLO", 3);
        if(!v2) {
            return 1;
        }
    }
    return 0;
}

int main(int param0, int param1, int param2) {
    char v0;
    →printf("IOLI Crackme Level 0x06\n");
    →printf("Password: ");
    →scanf((char*)&gvar_8048787, &v0);
    check(&v0, param2);
    return 0;
}

int parell(char* __s, int param1) {
    int v0;
    →sscanf(__s, (char*)&gvar_804873D, &v0);
    int result = dummy(v0, param1);
    if(result) {
        for(int i = 0; i <= 9; ++i) {
            if(!(v0 & 0x1)) {
                →printf("Password OK!\n");
                /*NO_RETURN*/ →exit(0);
            }
            result = &i;
        }
    }
    return result;
}

void sub_8048378() {
    jump gvar_8049FFC;
}

int sub_8048424(int param0, int param1) {
    void* ptr0 = __gmon_start__;
    if(ptr0) {
        ptr0();
    }
    return param1;
}
