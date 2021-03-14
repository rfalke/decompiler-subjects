
void* fill(void* __s, int param1) {
    return →memset(__s, 120, (size_t)(param1 * 4));
}

int main(int param0) {
    with_alloca(param0);
    with_array(param0);
    return 0;
}

void sub_80482D0() {
    jump gvar_804A008;
}

void sub_8048300() {
    jump __gmon_start__;
}

unsigned int use(int* param0) {
    unsigned int result = sum + *param0;
    sum += *param0;
    return result;
}

unsigned int with_alloca(int param0) {
    char v0;
    int v1 = 7;
    void* __s = (void*)((int)(int*)((int)&v0 >>> 4) * 16);
    int v2 = 8;
    fill(__s, param0);
    use(&v1);
    use((int*)__s);
    return use(&v2);
}

unsigned int with_array(int param0) {
    char v0;
    int v1 = 7;
    int v2 = param0 - 1;
    void* __s = (void*)((int)(int*)((int)&v0 >>> 2) * 4);
    int v3 = 8;
    fill(__s, param0);
    use(&v1);
    use((int*)__s);
    return use(&v3);
}
