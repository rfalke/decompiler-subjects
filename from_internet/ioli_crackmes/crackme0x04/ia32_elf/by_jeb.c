
void __i686.get_pc_thunk.bx() {
}

int check(char* __s) {
    int v0;
    int v1 = 0;
    unsigned int min = 0;
    for(size_t i = →strlen(__s); i > min; i = →strlen(__s)) {
        char v2 = __s[min];
        →sscanf(&v2, (char*)&gvar_8048638, &v0);
        v1 += v0;
        if(v1 == 15) {
            →printf("Password OK!\n");
            /*NO_RETURN*/ →exit(0);
        }
        ++min;
    }
    return →printf("Password Incorrect!\n");
}

int main() {
    char v0;
    →printf("IOLI Crackme Level 0x04\n");
    →printf("Password: ");
    →scanf((char*)&gvar_8048682, &v0);
    check(&v0);
    return 0;
}

void sub_8048354() {
    jump gvar_8049FFC;
}

int sub_80483F4(int param0, int param1) {
    void* ptr0 = __gmon_start__;
    if(ptr0) {
        ptr0();
    }
    return param1;
}
