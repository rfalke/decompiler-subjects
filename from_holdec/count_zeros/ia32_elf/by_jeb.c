
int count_zeros(int param0, unsigned int* param1) {
    if(param0 > 0) {
        unsigned int* ptr0 = param1;
        int* ptr1 = (int*)(param0 * 4 + (int)ptr0);
        int v0 = 0;
        do {
            v0 = (unsigned int)(*ptr0 > 0) + v0 - 1;
            ++ptr0;
        }
        while(ptr1 != ptr0);
        return 0 - v0;
    }
    return 0;
}

int main() {
    int v0;
    char v1;
    int v2 = v0;
    int* ptr0 = &v1;
    int v3 = 0;
    unsigned int* ptr1 = &v3;
    int v4 = 1;
    int v5 = 2;
    int v6 = 3;
    int v7 = 0;
    int v8 = 1;
    int v9 = 2;
    int v10 = 0;
    int v11 = 3;
    int v12 = count_zeros(4, &v3);
    →printf("count_zeros: %d\n", v12);
    int v13 = count_zeros(5, &v7);
    →printf("count_zeros: %d\n", v13);
    return 0;
}

void sub_8049030() {
    jump gvar_804C008;
}

void sub_8049127() {
}
