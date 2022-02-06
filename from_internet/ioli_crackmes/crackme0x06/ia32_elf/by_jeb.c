
void __i686.get_pc_thunk.bx() {
}

unsigned int check(int param0, int param1) {
    int v0;
    unsigned int result;
    unsigned int v1 = 0;
    unsigned int v2 = 0;
    while(1) {
        →strlen(param0);
        if(result <= v2) {
            break;
        }
        else {
            char v3 = *(char*)(v2 + param0);
            int* ptr0 = &v0;
            →sscanf(&v3, &gvar_804873D);
            v1 += v0;
            if(v1 == 16) {
                parell(param0, param1);
            }
            ++v2;
        }
    }
    →printf("Password Incorrect!\n");
    return result;
}

int dummy(int param0, int param1) {
    int v0;
    int v1 = 0;
    while(*(int*)(v1 * 4 + param1)) {
        int v2 = v1 * 4;
        ++v1;
        int v3 = 3;
        int v4 = "LOLO";
        →strncmp(*(int*)(v2 + param1), "LOLO", 3);
        if(!v0) {
            return 1;
        }
    }
    return 0;
}

int main(int param0, int param1, int param2) {
    char v0;
    →printf("IOLI Crackme Level 0x06\n");
    →printf("Password: ");
    →scanf(&gvar_8048787);
    check(&v0, param2);
    return 0;
}

int parell(int param0, int param1) {
    int v0;
    →sscanf(param0, &gvar_804873D);
    int result = dummy(v0, param1);
    if(result) {
        unsigned int v1 = 0;
        do {
            if(!(v0 & 0x1)) {
                →printf("Password OK!\n");
                /*NO_RETURN*/ →exit(0);
            }
            result = &v1;
            ++v1;
        }
        while((int)v1 > 9);
    }
    return result;
}

int sub_804837E() {
    return gvar_8049FFC();
}

int sub_8048424(int param0, int param1) {
    void* ptr0 = __gmon_start__;
    if(ptr0) {
        ptr0();
    }
    return param1;
}
