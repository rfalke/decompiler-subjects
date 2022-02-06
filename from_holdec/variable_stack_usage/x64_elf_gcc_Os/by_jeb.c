
char fill(char* param0, int param1) {
    for(long i = (long)param1 * 4L; i != 0L; --i) {
        *param0 = 120;
        ++param0;
    }
    return 120;
}

long main(long param0, long param1, long param2, long param3, int param4) {
    with_alloca(param0);
    with_array((long)param4);
    return 0L;
}

long sub_400489() {
    long v0;
    long v1 = v0;
    deregister_tm_clones();
    completed.6917 = 1;
}

void sub_40049A() {
}

long sub_4004B0() {
    return register_tm_clones();
}

int use(int* param0) {
    int result = *param0;
    sum += result;
    return result;
}

int with_alloca(int param0) {
    int* ptr0;
    int v0 = 7;
    int v1 = 8;
    fill((char*)((long)(long*)((char*)&v1 + 3L) & 0xfffffffffffffff0L), (long)param0);
    use(&v0);
    use(ptr0);
    return use(&v1);
}

int with_array(int param0) {
    char v0;
    int v1 = 7;
    int v2 = 8;
    fill(&v0, (long)param0);
    use(&v1);
    use((int*)&v0);
    return use(&v2);
}
