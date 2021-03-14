
void __i686.get_pc_thunk.bx() {
}

int main() {
    int v0;
    →printf("IOLI Crackme Level 0x03\n");
    →printf("Password: ");
    →scanf((char*)&gvar_8048634, &v0);
    test(v0, 0x52b24);
    return 0;
}

int shift(char* __s) {
    char v0;
    unsigned int min = 0;
    for(size_t i = →strlen(__s); i > min; i = →strlen(__s)) {
        *(char*)((int)&v0 + min) = __s[min] - 3;
        ++min;
    }
    *(char*)((int)&v0 + min) = 0;
    return →printf((char*)&gvar_80485E8, &v0);
}

void sub_8048310() {
    jump gvar_8049FFC;
}

int sub_8048384(int param0, int param1) {
    void* ptr0 = __gmon_start__;
    if(ptr0) {
        ptr0();
    }
    return param1;
}

int test(int param0, int param1) {
    return param0 != param1 ? shift("Lqydolg#Sdvvzrug$"): shift("Sdvvzrug#RN$$$#=,");
}
