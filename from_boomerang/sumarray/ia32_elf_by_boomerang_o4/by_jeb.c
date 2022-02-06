
int main() {
    int v0 = 0;
    unsigned int v1 = 0;
    do {
        v0 += *(int*)(v1 * 4 + (int)&a);
        ++v1;
    }
    while((int)v1 <= 9);
    →printf("Sum is %d\n", v0);
    return 0;
}

int sub_804824E() {
    return gvar_804954C();
}
