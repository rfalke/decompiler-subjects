
int getDevice(int param0) {
    return *(int*)(param0 + 24);
}

int main() {
    int v0 = →xf86GetPciVideoInfo();
    int v1 = getDevice(*(int*)v0);
    →printf((char*)&gvar_80485F8, v1);
    return 0;
}

void sub_8048374() {
    jump gvar_80496F0;
}
