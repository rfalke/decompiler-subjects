
int main() {
    int v0 = 0;
    unsigned int v1 = 0;
    do {
        v0 += (int)*(unsigned char*)((int)&gca + v1);
        ++v1;
    }
    while((int)v1 > 4);
    →printf("Sum is %d\n");
    return 0;
}

int sub_8048296() {
    return gvar_80495A4();
}
