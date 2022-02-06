
int main(int param0, int param1) {
    char v0;
    int v1;
    int result = →__xstat(3, "test/source/stattest.c", &v0);
    →printf("Stat returns %d; size of file is %d\n", result, v1);
    return result;
}

int sub_8048272() {
    return gvar_804957C();
}
