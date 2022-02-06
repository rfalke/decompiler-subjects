
int main() {
    int v0;
    int v1;
    int v2 = proc1(3, 4);
    →printf((char*)&gvar_804842C, v2, v0, v1);
    int v3 = proc1(5, 6);
    return →printf((char*)&gvar_804842C, v3, v0, v1);
}

int proc1(int param0, int param1) {
    return param0 + param1;
}

int sub_804824E() {
    return gvar_8049524();
}
