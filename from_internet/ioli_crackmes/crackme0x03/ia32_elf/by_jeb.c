
void __i686.get_pc_thunk.bx() {
}

int main() {
    unsigned int v0;
    →printf("IOLI Crackme Level 0x03\n");
    →printf("Password: ");
    →scanf(&gvar_8048634);
    test(v0, 0x52b24);
    return 0;
}

unsigned int shift(int param0) {
    char v0;
    unsigned int result;
    unsigned int v1 = 0;
    while(1) {
        →strlen(param0);
        if(result <= v1) {
            break;
        }
        else {
            *(char*)((int)&v0 + v1) = *(unsigned char*)(v1 + param0) - 3;
            ++v1;
        }
    }
    *(char*)((int)&v0 + v1) = 0;
    →printf(&gvar_80485E8);
    return result;
}

int sub_8048316() {
    return gvar_8049FFC();
}

int sub_8048384(int param0, int param1) {
    void* ptr0 = __gmon_start__;
    if(ptr0) {
        ptr0();
    }
    return param1;
}

unsigned int test(unsigned int param0, unsigned int param1) {
    return param0 != param1 ? shift("Lqydolg#Sdvvzrug$"): shift("Sdvvzrug#RN$$$#=,");
}
