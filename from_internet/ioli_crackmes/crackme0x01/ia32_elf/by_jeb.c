
void __i686.get_pc_thunk.bx() {
}

int main() {
    unsigned int v0;
    →printf("IOLI Crackme Level 0x01\n");
    →printf("Password: ");
    →scanf(&gvar_804854C);
    if(v0 != 5274) {
        →printf("Invalid Password!\n");
    }
    else {
        →printf("Password OK :)\n");
    }
    return 0;
}

int sub_80482F2() {
    return gvar_8049FFC();
}

int sub_8048354(int param0, int param1) {
    void* ptr0 = __gmon_start__;
    if(ptr0) {
        ptr0();
    }
    return param1;
}
