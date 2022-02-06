
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

int sub_804838F() {
    return 0;
}

void sub_80483C8() {
}

int sub_80483F9() {
    int v0;
    int v1 = v0;
    deregister_tm_clones();
    completed.6532 = 1;
}

void sub_804840C() {
}

int sub_8048420() {
    return register_tm_clones();
}

int use(int* param0) {
    int result = *param0;
    sum += result;
    return result;
}

int with_alloca(int param0) {
    char v0;
    int v1;
    int v2 = v1;
    int v3 = 7;
    int v4 = 8;
    fill((int)&v0 & 0xfffffff0, param0);
    use(&v3);
    use((int*)((int)&v0 & 0xfffffff0));
    return use(&v4);
}

int with_array(int param0) {
    char v0;
    int v1;
    int v2 = v1;
    int v3 = 7;
    int v4 = 8;
    fill(&v0, param0);
    use(&v3);
    use((int*)&v0);
    return use(&v4);
}
