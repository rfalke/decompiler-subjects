
void* fill(void* __s, int param1) {
    void* ptr0 = __s;
    int v0 = param1;
    int v1 = 120;
    return →memset(__s, 120, (size_t)(param1 * 4));
}

int main(int param0, int param1) {
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
    int v1 = param0;
    int v2 = 7;
    void* __s = (void*)((int)&v0 - ((v1 * 4 + 15) & 0xfffffff0));
    int v3 = 8;
    fill(__s, v1);
    use(&v2);
    use((int*)__s);
    return use(&v3);
}

void* with_array(int param0) {
    char v0;
    int v1 = param0;
    int v2 = 7;
    void* result = &v0;
    int v3 = 8;
    int v4 = v1;
    int* ptr0 = (int*)&v0;
    fill(&v0, v4);
    use(&v2);
    use(ptr0);
    use(&v3);
    return result;
}
