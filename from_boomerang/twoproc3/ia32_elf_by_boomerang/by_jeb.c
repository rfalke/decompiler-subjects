
int getDevice(int param0) {
    return *(int*)(param0 + 24);
}

int main() {
    int* ptr0;
    →xf86GetPciVideoInfo();
    int* ptr1 = ptr0;
    int v0 = getDevice(*ptr0);
    →printf(&gvar_80485F8);
    return 0;
}

int sub_804837A() {
    return gvar_80496F0();
}
