
void __i686.get_pc_thunk.bx() {
}

void forever() {
    int v0 = 0;
    while(1) {
        ++v0;
        →printf("i=%d\n");
    }
}

int main() {
    int v0;
    char v1;
    char v2;
    void* ptr0;
    int* ptr1 = &v0;
    char v3 = &v1 == 16;
    char v4 = (int)&v2 < 0;
    char v5 = __parity__((unsigned char)&v1 - 16);
    char v6 = 0;
    char v7 = 0;
    int* ptr2 = &ptr0;
    /*NO_RETURN*/ forever();
}

int sub_80482CA() {
    return gvar_8049654();
}
