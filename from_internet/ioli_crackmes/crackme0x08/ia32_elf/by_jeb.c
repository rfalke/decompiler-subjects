
void __i686.get_pc_thunk.bx() {
}

int che() {
    →printf("Password Incorrect!\n");
    /*NO_RETURN*/ →exit(0);
}

int check(char* __s, int param1) {
    int v0;
    int v1 = 0;
    unsigned int min = 0;
    for(size_t i = →strlen(__s); i > min; i = →strlen(__s)) {
        char v2 = __s[min];
        →sscanf(&v2, (char*)&gvar_80487C2, &v0);
        v1 += v0;
        if(v1 == 16) {
            parell(__s, param1);
        }
        ++min;
    }
    /*NO_RETURN*/ che();
}

int dummy(int param0, int param1) {
    int v0 = 0;
    while(*(int*)(v0 * 4 + param1)) {
        int v1 = v0 * 4;
        ++v0;
        int v2 = →strncmp(*(char**)(v1 + param1), "LOLO", 3);
        if(!v2) {
            LOL = 1;
            return 1;
        }
    }
    return 0;
}

int main(int param0, int param1, int param2) {
    char v0;
    →printf("IOLI Crackme Level 0x08\n");
    →printf("Password: ");
    →scanf((char*)&gvar_80487FD, &v0);
    /*NO_RETURN*/ check(&v0, param2);
}

int parell(char* __s, int param1) {
    int v0;
    →sscanf(__s, (char*)&gvar_80487C2, &v0);
    int result = dummy(v0, param1);
    if(result) {
        for(int i = 0; i <= 9; ++i) {
            if(!(v0 & 0x1)) {
                if(LOL == 1) {
                    →printf("Password OK!\n");
                }
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

int sub_804862F(int param0) {
    int* ptr0;
    int result = dummy(*(ptr0 - 1), *(ptr0 + 3));
    if(result) {
        *(ptr0 - 3) = 0;
        while(*(ptr0 - 3) <= 9) {
            if(!(*(ptr0 - 1) & 0x1)) {
                →printf("wtf?\n");
                /*NO_RETURN*/ →exit(0);
            }
            result = (int)(ptr0 - 3);
            *(int*)result = *(int*)result + 1;
        }
    }
    return result;
}

int sub_80486D9() {
    return 0;
}
