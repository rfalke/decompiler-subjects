
int dump1(int param0) {
    →printf("got 0x%08x\n");
    return 0;
}

int dump2(int param0, int param1) {
    →printf("got 0x%08x, 0x%08x\n");
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

int sub_8049036() {
    return gvar_804C008();
}

void sub_80490E7() {
}

int sub_804911C() {
    return 0;
}

void sub_8049168() {
}

int sub_804919D() {
    int result = deregister_tm_clones();
    completed.6844 = 1;
    return result;
}

void sub_80491B8() {
}

int test1() {
    char v0;
    char v1;
    *(int*)&v0 = "1) init with bytes, 4 byte read (should=0x60504030)";
    *(int*)&v1 = &loc_80491DA;
    /*BAD_CALL!*/ →puts(*(int*)&v0);
    char v2 = 48;
    char v3 = 64;
    char v4 = 80;
    char v5 = 96;
    dump1(*(int*)&v2);
    return 0;
}

int test2() {
    char v0;
    char v1;
    char v2;
    *(int*)&v0 = "2) init with bytes, 2 byte extra write, 4 byte read (should=0x61514030)";
    *(int*)&v1 = &loc_804924A;
    /*BAD_CALL!*/ →puts(*(int*)&v0);
    char v3 = 48;
    char v4 = 64;
    *(short*)&v2 = 0x6151;
    dump1(*(int*)&v3);
    return 0;
}

int test3() {
    char v0;
    char v1;
    char v2;
    char v3;
    *(int*)&v0 = "3) init with bytes, 2 byte extra write, 4 byte extra write, 4 byte read (should=0x62514030)";
    *(int*)&v1 = &loc_80492CA;
    /*BAD_CALL!*/ →puts(*(int*)&v0);
    char v4 = 48;
    char v5 = 64;
    *(short*)&v2 = 0x6151;
    *(int*)&v3 = -1836944798;
    dump1(*(int*)&v4);
    return 0;
}

int test4() {
    char v0;
    char v1;
    int v2;
    *(int*)&v0 = "4) init with bytes, address of taken, 4 byte read (should=0x60504030)";
    *(int*)&v1 = &loc_804934A;
    /*BAD_CALL!*/ →puts(*(int*)&v0);
    char v3 = 16;
    char v4 = 32;
    char v5 = 48;
    char v6 = 64;
    char v7 = 80;
    char v8 = 96;
    char v9 = 112;
    char v10 = 128;
    v1 = 144;
    char v11 = 160;
    char v12 = 176;
    char v13 = 192;
    v0 = 208;
    char v14 = 224;
    char v15 = 240;
    dump2(&v2, *(int*)&v5);
    return 0;
}

int test5() {
    char v0;
    char v1;
    *(int*)&v0 = "5) init with bytes, address of taken BEFORE and modify, 4 byte read (should=0x60524030)";
    *(int*)&v1 = &loc_80493BA;
    /*BAD_CALL!*/ →puts(*(int*)&v0);
    char v2 = 48;
    char v3 = 64;
    char v4 = 80;
    char v5 = 96;
    char v6 = 112;
    char v7 = 128;
    v1 = 144;
    char v8 = 160;
    char v9 = 176;
    char v10 = 192;
    v0 = 208;
    char v11 = 224;
    char v12 = 240;
    modify(&v4);
    dump1(*(int*)&v2);
    return 0;
}

int test6() {
    char v0;
    char v1;
    char v2;
    *(int*)&v0 = "6) init with bytes, 2 byte extra write, double 2 byte modify, 4 byte read (should=0x61514230)";
    *(int*)&v1 = &loc_804943A;
    /*BAD_CALL!*/ →puts(*(int*)&v0);
    char v3 = 48;
    char v4 = 64;
    *(short*)&v2 = 0x6151;
    *(short*)&v4 = *(short*)&v4 + 1;
    *(short*)&v4 = *(short*)&v4 + 1;
    dump1(*(int*)&v3);
    return 0;
}
