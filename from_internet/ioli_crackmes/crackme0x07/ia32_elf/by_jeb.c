
int start(int param0, int param1) {
    →__libc_start_main();
    hlt();
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

int* sub_8048450() {
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
                v0{sub_8049F18}();
            }
        }
        gvar_804A028 = 1;
    }
    return result;
}

unsigned int sub_8048480() {
    return 0;
}

int sub_80484B4(int param0, int param1) {
    int v0 = 0;
    while(*(int*)(v0 * 4 + param1)) {
        int v1 = v0 * 4;
        ++v0;
        int v2 = →strncmp(*(char**)(v1 + param1), "LOLO", 3);
        if(!v2) {
            gvar_804A02C = 1;
            return 1;
        }
    }
    return 0;
}

int sub_8048524() {
    →printf("Password Incorrect!\n");
    /*NO_RETURN*/ →exit(0);
}

int sub_8048542(char* __s, int param1) {
    int v0;
    →sscanf(__s, (char*)&gvar_80487C2, &v0);
    int result = sub_80484B4(v0, param1);
    if(result) {
        for(int i = 0; i <= 9; ++i) {
            if(!(v0 & 0x1)) {
                if(gvar_804A02C == 1) {
                    →printf("Password OK!\n");
                }
                /*NO_RETURN*/ →exit(0);
            }
            result = &i;
        }
    }
    return result;
}

int sub_80485B9(char* __s, int param1) {
    int v0;
    int v1 = 0;
    unsigned int min = 0;
    for(size_t i = →strlen(__s); i > min; i = →strlen(__s)) {
        char v2 = __s[min];
        →sscanf(&v2, (char*)&gvar_80487C2, &v0);
        v1 += v0;
        if(v1 == 16) {
            sub_8048542(__s, param1);
        }
        ++min;
    }
    /*NO_RETURN*/ sub_8048524();
}

int sub_804862F(int param0) {
    int* ptr0;
    int result = sub_80484B4(*(ptr0 - 1), *(ptr0 + 3));
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

int sub_804867D(int param0, int param1, int param2) {
    char v0;
    →printf("IOLI Crackme Level 0x07\n");
    →printf("Password: ");
    →scanf((char*)&gvar_80487FD, &v0);
    /*NO_RETURN*/ sub_80485B9(&v0, param2);
}

int sub_80486D9() {
    return 0;
}

int sub_80486E0(int param0, int param1) {
    return initializer_0(param0, param1);
}

void sub_8048750() {
}

void sub_8048755() {
}

int sub_8048760() {
    int result;
    unsigned int* ptr0 = (unsigned int*)&gvar_8049F0C;
    for(unsigned char i = *(int*)&gvar_8049F0C; i != -1; i = *ptr0) {
        --ptr0;
        i();
    }
    return result;
}
