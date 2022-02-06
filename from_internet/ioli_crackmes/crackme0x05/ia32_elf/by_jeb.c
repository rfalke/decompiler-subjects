
void __i686.get_pc_thunk.bx() {
}

unsigned int check(int param0) {
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
            →sscanf(&v3, &gvar_8048668);
            v1 += v0;
            if(v1 == 16) {
                parell(param0);
            }
            ++v2;
        }
    }
    →printf("Password Incorrect!\n");
    return result;
}

int main() {
    char v0;
    →printf("IOLI Crackme Level 0x05\n");
    →printf("Password: ");
    →scanf(&gvar_80486B2);
    check(&v0);
    return 0;
}

int parell(int param0) {
    int v0;
    →sscanf(param0, &gvar_8048668);
    if(!(v0 & 0x1)) {
        →printf("Password OK!\n");
        /*NO_RETURN*/ →exit(0);
    }
    return v0 & 0x1;
}

int sub_804835A() {
    return gvar_8049FFC();
}

int sub_80483F4(int param0, int param1) {
    void* ptr0 = __gmon_start__;
    if(ptr0) {
        ptr0();
    }
    return param1;
}
