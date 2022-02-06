
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

int use(int* param0) {
    int result = *param0;
    sum += result;
    return result;
}

int with_alloca(int param0) {
    char v0;
    int v1 = 7;
    int v2 = 8;
    fill(&v0, param0);
    use(&v1);
    use((int*)&v0);
    return use(&v2);
}

int with_array(int param0) {
    char v0;
    int v1 = 7;
    int v2 = 8;
    fill(&v0, param0);
    use(&v1);
    use((int*)&v0);
    return use(&v2);
}
