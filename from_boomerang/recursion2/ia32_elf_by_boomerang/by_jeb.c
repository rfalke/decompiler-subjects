
unsigned int g() {
    --g_f;
    if(g_f < 0x80000000) {
        f();
    }
    unsigned int result = res + 13;
    res += 13;
    return result;
}

unsigned int h() {
    --h_i;
    if(h_i < 0x80000000) {
        i();
    }
    unsigned int result = res + 17;
    res += 17;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int i() {
    unsigned int result = res + 19;
    res += 19;
    return result;
}

unsigned int j(int param0, int param1) {
    --j_k;
    if(j_k < 0x80000000) {
        k(param1, param0);
    }
    unsigned int result = res + 23;
    res += 23;
    return result;
}

unsigned int k(int param0, int param1) {
    --k_e;
    if(k_e < 0x80000000) {
        e(param1, param0);
    }
    unsigned int result = res + 27;
    res += 27;
    return result;
}

unsigned int l(int param0, int param1) {
    --l_b;
    if(l_b < 0x80000000) {
        b(param1, param0);
    }
    unsigned int result = res + 29;
    res += 29;
    return result;
}

int main() {
    b(55, 99);
    →printf("ecx is %d, edx is %d\n");
    →printf("res is %d\n");
    return 0;
}

int sub_804829E() {
    return gvar_80497F4();
}
