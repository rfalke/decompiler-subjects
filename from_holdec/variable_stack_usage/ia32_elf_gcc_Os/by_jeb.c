
int fill(char* param0, int param1) {
    char* ptr0 = param0;
    int v0 = param1 * 4;
    int result = (unsigned int)120 | ((unsigned int)((param1 >>> 8) & 0xffffff) << 8);
    while(v0 != 0) {
        *ptr0 = (unsigned char)result;
        ++ptr0;
        --v0;
    }
    return result;
}

int main(int param0) {
    with_alloca(param0);
    with_array(param0);
    return 0;
}

int sub_80482D0() {
    return __gmon_start__();
}

int sub_804834F() {
    return 0;
}

void sub_8048388() {
}

int sub_80483B9() {
    int v0;
    int v1 = v0;
    deregister_tm_clones();
    completed.6532 = 1;
}

void sub_80483CC() {
}

int sub_80483E0() {
    return register_tm_clones();
}

int use(int* param0) {
    int result = *param0;
    sum += result;
    return result;
}

int with_alloca(int param0) {
    char v0;
    int* ptr0;
    int v1 = 7;
    int v2 = 8;
    unsigned int v3 = (unsigned int)((param0 * 4 + 30) & 0xfffffff0);
    unsigned int v4 = (unsigned int)((param0 * 4 + 30) & 0xfffffff0);
    int v5 = param0;
    fill((char*)((int)&v0 & 0xfffffff0), param0);
    use(&v1);
    use(ptr0);
    return use(&v2);
}

int with_array(int param0) {
    char v0;
    int* ptr0;
    int v1 = 7;
    int v2 = 8;
    unsigned int v3 = (unsigned int)((param0 * 4 + 18) & 0xfffffff0);
    unsigned int v4 = (unsigned int)((param0 * 4 + 18) & 0xfffffff0);
    int v5 = param0;
    fill(&v0, param0);
    use(&v1);
    use(ptr0);
    return use(&v2);
}
