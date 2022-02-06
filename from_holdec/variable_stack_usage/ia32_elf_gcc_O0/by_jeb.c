
int fill(int param0, int param1) {
    int result;
    →memset(param0, 120, param1 * 4);
    return result;
}

int main(int param0) {
    with_alloca(param0);
    with_array(param0);
    return 0;
}

int sub_80482D6() {
    return gvar_804A008();
}

int sub_8048300() {
    return __gmon_start__();
}

int sub_804835F() {
    return 0;
}

void sub_8048398() {
}

int sub_80483C9() {
    int v0;
    int v1 = v0;
    deregister_tm_clones();
    completed.6532 = 1;
}

void sub_80483DC() {
}

int sub_80483F0() {
    return register_tm_clones();
}

unsigned int use(int* param0) {
    unsigned int result = sum + *param0;
    sum += *param0;
    return result;
}

unsigned int with_alloca(int param0) {
    char v0;
    int v1 = 7;
    int v2 = (int)(int*)((int)&v0 >>> 4) * 16;
    int v3 = 8;
    fill(v2, param0);
    use(&v1);
    use((int*)v2);
    return use(&v3);
}

unsigned int with_array(int param0) {
    char v0;
    int v1;
    int v2 = v1;
    int v3 = 7;
    int v4 = param0 - 1;
    int v5 = (int)(int*)((int)&v0 >>> 2) * 4;
    int v6 = 8;
    fill(v5, param0);
    use(&v3);
    use((int*)v5);
    return use(&v6);
}
