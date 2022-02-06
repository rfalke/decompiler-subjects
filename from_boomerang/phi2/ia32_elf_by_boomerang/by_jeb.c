
int main(size_t param0, int param1) {
    int v0;
    int v1;
    size_t v2 = proc1(param0, *(char**)(param1 + 4));
    →printf((char*)&gvar_80484C2, v2, v0, v1);
    return 0;
}

size_t proc1(size_t param0, char* __s) {
    size_t v0;
    int v1;
    int v2;
    if((int)param0 > 2) {
        param0 = →strlen(__s);
        v0 = →strlen(__s);
        →printf((char*)&gvar_80484B8, (unsigned int)(v0 + param0), v1, v2);
    }
    else {
        param0 = →strlen(__s);
    }
    →printf("%d, %d", param0, v0);
    return param0;
}

int sub_8048272() {
    return gvar_80495BC();
}
