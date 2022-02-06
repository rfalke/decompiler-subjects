
int main() {
    unsigned int v0 = 0;
    unsigned int v1 = 0;
    while(1) {
        int v2 = test_1(v0);
        int v3 = test_2(v0);
        int v4 = test_3((int)v0);
        if(v2 != v3 || v4 != v2) {
            →printf("%u %u %u (diff=%d) %u (diff=%d)\n");
        }
        if(v1 && v0 < v1) {
            return 0;
        }
        v1 = v0;
        v0 += 1000000;
    }
    return 0;
}

int sub_80482D6() {
    return gvar_804A008();
}

int sub_8048300() {
    return __gmon_start__();
}

int sub_80483DF() {
    return 0;
}

void sub_8048418() {
}

int sub_8048449() {
    int v0;
    int v1 = v0;
    deregister_tm_clones();
    completed.6532 = 1;
}

void sub_804845C() {
}

int sub_8048470() {
    return register_tm_clones();
}

int test_1(unsigned int param0) {
    return (int)(param0 / 7);
}

int test_2(unsigned int param0) {
    return (int)(param0 / 7);
}

int test_3(int param0) {
    return (unsigned int)(((unsigned long long)param0 * 613566757L) >>> 32L);
}
