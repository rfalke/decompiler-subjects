
void __i686.get_pc_thunk.bx() {
}

void forever() {
    int v0 = 0;
    while(1) {
        int v1 = v0;
        ++v0;
        →printf("i=%d\n", v1);
    }
}

int main() {
    /*NO_RETURN*/ forever();
}

void sub_80482C4() {
    jump gvar_8049654;
}

int sub_80483F6() {
    return 0;
}
