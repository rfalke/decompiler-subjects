
int do_cmp(char param0, char param1) {
    return param0 < param1 ? 1: 0;
}

int do_cmp_const(char param0) {
    return param0 < 10 ? 1: 0;
}

int do_signed(char param0, char param1) {
    return param0 < param1 ? 1: 0;
}

int do_signed_const(char param0) {
    return param0 < 10 ? 1: 0;
}

int main() {
    int v0 = 0;
    do {
        int v1 = do_cmp_const((char)v0);
        int v2 = do_signed_const((char)v0);
        int v3 = (unsigned char)v0 <= 9 ? 1: 0;
        if(((unsigned char)v0 <= 9 ? 1: 0) != v1) {
            →printf("CONST C and setl differ: %3d = 0x%02x  ->  ", v0, v0);
            →printf("x<10 = %d %d\n", v1, v3);
        }
        if(v2 != v1) {
            →printf("CONST %3d = 0x%02x  ->  ", v0, v0);
            →printf("x<10 = %d %d ", v1, v3);
            →printf("x-10<0 =%d\n", v2);
        }
        int v4 = 0;
        int v5 = v0;
        do {
            int v6 = do_cmp((char)v5, (char)v4);
            int v7 = do_signed((char)v5, (char)v4);
            int v8 = (unsigned char)v4 > (unsigned char)v0 ? 1: 0;
            int v9 = v7;
            if(v8 != v6) {
                int v10 = v7;
                →printf("C and setl differ: %3d = 0x%02x %3d = 0x%02x  ->  ", v5, v5, v4, v4);
                →printf("x<y = %d %d\n", v6, v8);
                v9 = v10;
            }
            int v11 = v9;
            if(v9 != v6) {
                →printf("%3d = 0x%02x %3d = 0x%02x  ->  ", v5, v5, v4, v4);
                →printf("x<y = %d ", v6);
                →printf("x-y<0 =%d\n", v11);
            }
            ++v4;
        }
        while(v4 != 0x100);
        v0 = v5 + 1;
    }
    while(v0 != 0x100);
    return 0;
}

void sub_8049030() {
    jump gvar_804C008;
}

void sub_8049207() {
}
