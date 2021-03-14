
int main() {
    unsigned int v0 = 0;
    unsigned int v1 = 0;
    while(1) {
        unsigned int v2 = test_1(v0);
        int v3 = test_2((int)v0);
        int v4 = test_3((int)v0);
        if(v3 != v2 || v4 != v2) {
            →printf("%u %u %u (diff=%d) %u (diff=%d)\n", v0, v2, v3, v3 - v2, v4, v4 - v2);
        }
        if(v1 && v0 < v1) {
            return 0;
        }
        v1 = v0;
        v0 += 1000000;
    }
    return 0;
}

void sub_80482D0() {
    jump gvar_804A008;
}

void sub_8048300() {
    jump __gmon_start__;
}

unsigned int test_1(unsigned int param0) {
    return param0 / 7;
}

int test_2(unsigned int param0) {
    return (int)(param0 / 7);
}

int test_3(int param0) {
    return (unsigned int)(((unsigned long long)param0 * 613566757L) >>> 32L);
}
