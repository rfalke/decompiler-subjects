
void __i686.get_pc_thunk.bx() {
}

int main() {
    char v0;
    int v1;
    →printf("IOLI Crackme Level 0x00\n");
    →printf("Password: ");
    →scanf(&gvar_804858C);
    →strcmp(&v0, "250382");
    if(v1) {
        →printf("Invalid Password!\n");
    }
    else {
        →printf("Password OK :)\n");
    }
    return 0;
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
