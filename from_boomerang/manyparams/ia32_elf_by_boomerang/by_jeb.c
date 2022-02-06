
int main() {
    int v0 = 0x40119999;
    int v1 = 0x9999999a;
    int v2 = 0x400a6666;
    int v3 = 0x66666666;
    int v4 = 0x40019999;
    int v5 = 0x9999999a;
    int v6 = 0x3ff19999;
    int v7 = 0x9999999a;
    →printf("Many parameters: %d, %.1f, %d, %.1f, %d, %.1f, %d, %.1f\n", 1, *(double*)&v7, 2, *(double*)&v5, 3, *(double*)&v3, 4, *(double*)&v1);
    return 0;
}

int sub_804824E() {
    return gvar_8049570();
}
