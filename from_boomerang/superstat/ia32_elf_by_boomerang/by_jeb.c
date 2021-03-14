
int main(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13 = →__xstat(3, *(char**)(param1 + 4), &v5);
    →printf("res: %i\n", v13);
    →printf("dev: %i\n", v5);
    →printf("ino: %i\n", v0);
    →printf("mode: %i\n", v6);
    →printf("nlink: %i\n", v1);
    →printf("uid: %i\n", v7);
    →printf("gid: %i\n", v2);
    →printf((char*)&gvar_8048539, v8);
    →printf("size: %i\n", v3);
    →printf((char*)&gvar_8048543, v9);
    →printf("blocks: %i\n", v4);
    →printf("atime: %i\n", v10);
    →printf("mtime: %i\n", v11);
    →printf("ctime: %i\n", v12);
    return 0;
}

void sub_804826C() {
    jump gvar_8049674;
}

int sub_8048282() {
    /*BAD_CALL!*/ sub_804826C();
}

int sub_8048292() {
    /*BAD_CALL!*/ sub_804826C();
}

int sub_80482A2() {
    /*BAD_CALL!*/ sub_804826C();
}

void sub_804832E() {
}

int sub_80484A6() {
    int result;
    int v0;
    int v1;
    int v2;
    do {
        *(int*)(v1 * 4 + (int)&data_start)();
        v0 = v1;
        --v1;
    }
    while(v0);
    finalizer_0(v2, 0);
    return result;
}
