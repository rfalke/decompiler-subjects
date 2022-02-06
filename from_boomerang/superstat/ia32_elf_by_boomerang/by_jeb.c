
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
    int v13;
    int v14 = v13;
    stat* ptr0 = &v6;
    int v15 = →__xstat(3, *(char**)(param1 + 4), &v6);
    →printf("res: %i\n", v15);
    →printf("dev: %i\n", v6);
    →printf("ino: %i\n", v0);
    →printf("mode: %i\n", v7);
    →printf("nlink: %i\n", v1);
    →printf("uid: %i\n", v5);
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

int sub_8048272() {
    return gvar_8049674();
}
