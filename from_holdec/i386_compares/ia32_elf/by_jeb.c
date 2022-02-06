
int do_cmp(unsigned char param0, unsigned char param1) {
    return (char)param0 >= (char)param1 ? 0: 1;
}

int do_cmp_const(unsigned char param0) {
    return (char)param0 >= 10 ? 0: 1;
}

int do_signed(unsigned char param0, unsigned char param1) {
    return (char)param0 >= (char)param1 ? 0: 1;
}

int do_signed_const(unsigned char param0) {
    return (char)param0 >= 10 ? 0: 1;
}

int main() {
    int v0;
    int v1;
    unsigned char v2;
    int v3;
    char v4;
    unsigned char v5;
    int v6 = v1;
    int v7 = 0;
    int v8 = v3;
    int* ptr0 = &v4;
    do {
        *(int*)&v2 = v7;
        int v9 = do_cmp_const(v2);
        *(int*)&v2 = v7;
        int v10 = do_signed_const(v2);
        unsigned char v11 = (unsigned char)v7;
        if(((unsigned char)v7 > 9 ? 0: 1) != v9) {
            v0 = v10;
            *(int*)&v5 = v7;
            *(int*)&v2 = "CONST C and setl differ: %3d = 0x%02x  ->  ";
            →printf(*(int*)&v2);
            *(int*)&v5 = v9;
            *(int*)&v2 = "x<10 = %d %d\n";
            →printf(*(int*)&v2);
            v10 = v0;
        }
        v0 = v10;
        if(v9 != v10) {
            *(int*)&v5 = v7;
            *(int*)&v2 = "CONST %3d = 0x%02x  ->  ";
            →printf(*(int*)&v2);
            *(int*)&v5 = v9;
            *(int*)&v2 = "x<10 = %d %d ";
            →printf(*(int*)&v2);
            *(int*)&v5 = v0;
            *(int*)&v2 = "x-10<0 =%d\n";
            →printf(*(int*)&v2);
        }
        unsigned int v12 = 0;
        do {
            *(unsigned int*)&v5 = v12;
            *(int*)&v2 = v7;
            int v13 = do_cmp(v2, v5);
            *(unsigned int*)&v5 = v12;
            *(int*)&v2 = v7;
            int v14 = do_signed(v2, v5);
            int v15 = (unsigned char)v12 <= (char)v11 ? 0: 1;
            int v16 = v14;
            v0 = v15;
            if(v15 != v13) {
                int v17 = v14;
                *(unsigned int*)&v2 = v12;
                →printf("C and setl differ: %3d = 0x%02x %3d = 0x%02x  ->  ");
                int v18 = v15;
                *(int*)&v5 = v13;
                *(int*)&v2 = "x<y = %d %d\n";
                →printf(*(int*)&v2);
                v16 = v17;
            }
            v0 = v16;
            if(v16 != v13) {
                *(unsigned int*)&v2 = v12;
                →printf("%3d = 0x%02x %3d = 0x%02x  ->  ");
                *(int*)&v5 = v13;
                *(int*)&v2 = "x<y = %d ";
                →printf(*(int*)&v2);
                *(int*)&v5 = v0;
                *(int*)&v2 = "x-y<0 =%d\n";
                →printf(*(int*)&v2);
            }
            ++v12;
        }
        while(v12 != 0x100);
        ++v7;
    }
    while(v7 != 0x100);
    return 0;
}

int sub_8049036() {
    return gvar_804C008();
}

void sub_8049207() {
}

int sub_804923C() {
    return 0;
}

void sub_8049288() {
}

int sub_80492BD() {
    int result = deregister_tm_clones();
    completed.6844 = 1;
    return result;
}

void sub_80492D8() {
}
