
int start(int param0, int param1) {
    →__libc_start_main();
    hlt();
}

void sub_80483A0() {
    jump gvar_8049FFC;
}

int sub_8048444(int param0, int param1) {
    void* ptr0 = __gmon_start__;
    if(ptr0) {
        ptr0();
    }
    return param1;
}

int* sub_8048470() {
    int* result;
    if(!gvar_804A028) {
        while(1) {
            result = gvar_804A024;
            int v0 = *result;
            if(!v0) {
                break;
            }
            else {
                gvar_804A024 = result + 1;
                v0{sub_8049F14}();
            }
        }
        gvar_804A028 = 1;
    }
    return result;
}

unsigned int sub_80484A0() {
    return 0;
}

int sub_80484D4(int param0, int param1) {
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
    /*NO_RETURN*/ →exit(-1);
}

int sub_804855D() {
    int v0;
    int v1;
    →printf("Password Incorrect!\n", v0, v1);
    /*NO_RETURN*/ →exit(0);
}

int sub_8048589(char* __s, int param1) {
    int v0;
    →sscanf(__s, (char*)0x8048852, &v0);
    int result = sub_80484D4(v0, param1);
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

int sub_8048616(char* __s, int param1) {
    int v0;
    int v1;
    int v2 = v1;
    int v3 = 0;
    unsigned int min = 0;
    for(size_t i = →strlen(__s); i > min; i = →strlen(__s)) {
        char v4 = __s[min];
        →sscanf(&v4, (char*)0x8048852, &v0);
        v3 += v0;
        if(v3 == 16) {
            sub_8048589(__s, param1);
        }
        ++min;
    }
    /*NO_RETURN*/ sub_804855D();
}

int sub_804869A(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10) {
    int v0;
    int v1;
    int v2 = sub_80484D4(*(int*)(v0 - 8), *(int*)(v0 + 12));
    if(v2) {
        *(int*)(v0 - 16) = 0;
        while(*(int*)(v0 - 16) <= 9) {
            if(!(*(int*)(v0 - 8) & 0x1)) {
                →printf((char*)(v1 - 0x1791));
                /*NO_RETURN*/ →exit(0);
            }
            *(int*)(v0 - 16) = *(int*)(v0 - 16) + 1;
        }
    }
    jump param10;
}

int sub_80486EE(int param0, int param1, int param2) {
    char v0;
    int v1;
    int v2 = v1;
    →printf("IOLI Crackme Level 0x09\n");
    →printf("Password: ");
    →scanf((char*)0x804888D, &v0);
    /*NO_RETURN*/ sub_8048616(&v0, param2);
}

int sub_804875C() {
    return 0;
}

void sub_8048766() {
}

int sub_8048770(int param0, int param1) {
    return initializer_0(param0, param1);
}

void sub_80487E0() {
}

int sub_80487F0() {
    int result;
    unsigned int* ptr0 = (unsigned int*)&gvar_8049F08;
    for(unsigned char i = *(int*)&gvar_8049F08; i != -1; i = *ptr0) {
        --ptr0;
        i();
    }
    return result;
}
