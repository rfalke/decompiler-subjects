
int main() {
    short v0;
    *(int*)&v0 = 0x11223344;
    →printf("plain: 0x%08x\n");
    →printf("small: 0x%08x\n");
    return 0;
}

int sub_8049036() {
    return gvar_804C008();
}

void sub_80490E7() {
}

int sub_804911C() {
    return 0;
}

void sub_8049168() {
}

int sub_804919D() {
    int result = deregister_tm_clones();
    completed.6844 = 1;
    return result;
}

void sub_80491B8() {
}
