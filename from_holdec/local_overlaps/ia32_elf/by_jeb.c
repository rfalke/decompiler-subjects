
int dump1(int param0) {
    →printf("got 0x%08x\n", param0);
    return 0;
}

int dump2(int param0, int param1) {
    →printf("got 0x%08x, 0x%08x\n", param0, param1);
    return 0;
}

int main() {
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    return 0;
}

int modify(char* param0) {
    char* ptr0 = param0;
    *ptr0 = *ptr0 + 1;
    *ptr0 = *ptr0 + 1;
    return 0;
}

void sub_8049030() {
    jump gvar_804C008;
}

void sub_80490E7() {
}

int test1() {
    int v0;
    int v1;
    →puts("1) init with bytes, 4 byte read (should=0x60504030)");
    char v2 = 16;
    char v3 = 32;
    char v4 = 48;
    char v5 = 64;
    char v6 = 80;
    char v7 = 96;
    char v8 = 112;
    char v9 = 128;
    v0 & 0xFF = 144;
    (v0 >>> 8) & 0xFF = 160;
    (v0 >>> 16) & 0xFF = 176;
    (v0 >>> 24) & 0xFF = 192;
    v1 & 0xFF = 208;
    (v1 >>> 8) & 0xFF = 224;
    (v1 >>> 16) & 0xFF = 240;
    dump1(*(int*)&v4);
    return 0;
}

int test2() {
    int v0;
    int v1;
    →puts("2) init with bytes, 2 byte extra write, 4 byte read (should=0x61514030)");
    char v2 = 16;
    char v3 = 32;
    char v4 = 48;
    char v5 = 64;
    char v6 = 80;
    char v7 = 96;
    char v8 = 112;
    char v9 = 128;
    v0 & 0xFF = 144;
    (v0 >>> 8) & 0xFF = 160;
    (v0 >>> 16) & 0xFF = 176;
    (v0 >>> 24) & 0xFF = 192;
    v1 & 0xFF = 208;
    (v1 >>> 8) & 0xFF = 224;
    (v1 >>> 16) & 0xFF = 240;
    *(short*)&v6 = 0x6151;
    dump1(*(int*)&v4);
    return 0;
}

int test3() {
    int v0;
    int v1;
    →puts("3) init with bytes, 2 byte extra write, 4 byte extra write, 4 byte read (should=0x62514030)");
    char v2 = 16;
    char v3 = 32;
    char v4 = 48;
    char v5 = 64;
    char v6 = 80;
    char v7 = 96;
    char v8 = 112;
    char v9 = 128;
    v0 & 0xFF = 144;
    (v0 >>> 8) & 0xFF = 160;
    (v0 >>> 16) & 0xFF = 176;
    (v0 >>> 24) & 0xFF = 192;
    v1 & 0xFF = 208;
    (v1 >>> 8) & 0xFF = 224;
    (v1 >>> 16) & 0xFF = 240;
    *(short*)&v6 = 0x6151;
    *(int*)&v7 = -1836944798;
    dump1(*(int*)&v4);
    return 0;
}

int test4() {
    int v0;
    int v1;
    int v2;
    →puts("4) init with bytes, address of taken, 4 byte read (should=0x60504030)");
    char v3 = 16;
    char v4 = 32;
    char v5 = 48;
    char v6 = 64;
    char v7 = 80;
    char v8 = 96;
    char v9 = 112;
    char v10 = 128;
    v0 & 0xFF = 144;
    (v0 >>> 8) & 0xFF = 160;
    (v0 >>> 16) & 0xFF = 176;
    (v0 >>> 24) & 0xFF = 192;
    v1 & 0xFF = 208;
    (v1 >>> 8) & 0xFF = 224;
    (v1 >>> 16) & 0xFF = 240;
    dump2(&v2, *(int*)&v5);
    return 0;
}

int test5() {
    int v0;
    int v1;
    →puts("5) init with bytes, address of taken BEFORE and modify, 4 byte read (should=0x60524030)");
    char v2 = 16;
    char v3 = 32;
    char v4 = 48;
    char v5 = 64;
    char v6 = 80;
    char v7 = 96;
    char v8 = 112;
    char v9 = 128;
    v0 & 0xFF = 144;
    (v0 >>> 8) & 0xFF = 160;
    (v0 >>> 16) & 0xFF = 176;
    (v0 >>> 24) & 0xFF = 192;
    v1 & 0xFF = 208;
    (v1 >>> 8) & 0xFF = 224;
    (v1 >>> 16) & 0xFF = 240;
    modify(&v6);
    dump1(*(int*)&v4);
    return 0;
}

int test6() {
    int v0;
    int v1;
    →puts("6) init with bytes, 2 byte extra write, double 2 byte modify, 4 byte read (should=0x61514230)");
    char v2 = 16;
    char v3 = 32;
    char v4 = 48;
    char v5 = 64;
    char v6 = 80;
    char v7 = 96;
    char v8 = 112;
    char v9 = 128;
    v0 & 0xFF = 144;
    (v0 >>> 8) & 0xFF = 160;
    (v0 >>> 16) & 0xFF = 176;
    (v0 >>> 24) & 0xFF = 192;
    v1 & 0xFF = 208;
    (v1 >>> 8) & 0xFF = 224;
    (v1 >>> 16) & 0xFF = 240;
    *(short*)&v6 = 0x6151;
    *(short*)&v5 = *(short*)&v5 + 1;
    *(short*)&v5 = *(short*)&v5 + 1;
    dump1(*(int*)&v4);
    return 0;
}
